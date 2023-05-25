from fastapi import FastAPI, HTTPException
from typing import Optional
import pandas as pd
import numpy as np

app = FastAPI()

df = pd.read_csv('Periodic_Table.csv')

@app.get('/')
async def root():
    return {'message': 'Hello World, This is an API to get Data about Elements in the Periodic Table'}

@app.get("/element/name/{element_name}")
async def read_element_by_name(element_name: str, data_item: Optional[str] = None):
    if element_name not in df['element_name'].values:
        raise HTTPException(status_code=404, detail="Element not found: invalid Element Name")
    element_data = df[df['element_name'] == element_name].replace({np.nan: None, np.inf: None, -np.inf: None})

    # If there's no such element, return a 404.
    if element_data.empty:
        raise HTTPException(status_code=404, detail="Element not found: no element identifier provided")

    # If data_item is None, return all data for the element.
    if data_item is None:
        return element_data.to_dict(orient='records')[0]

    # If the requested data item is not a column in the DataFrame, return a 404.
    if data_item not in df.columns:
        raise HTTPException(status_code=404, detail=f"Data item not found: {data_item}")

    # Otherwise, return the requested data item for the specified element.
    return {data_item: element_data[data_item].values[0]}

@app.get("/element/number/{atomic_number}")
async def read_element_by_number(atomic_number: int, data_item: Optional[str] = None):
    if atomic_number not in df['atomic_number'].values:
        raise HTTPException(status_code=404, detail="Element not found: invalid Atomic Number")
    element_data = df[df['atomic_number'] == atomic_number].replace({np.nan: None, np.inf: None, -np.inf: None})

    # If there's no such element, return a 404.
    if element_data.empty:
        raise HTTPException(status_code=404, detail="Element not found: no element identifier provided")

    # If data_item is None, return all data for the element.
    if data_item is None:
        return element_data.to_dict(orient='records')[0]

    # If the requested data item is not a column in the DataFrame, return a 404.
    if data_item not in df.columns:
        raise HTTPException(status_code=404, detail=f"Data item not found: {data_item}")

    # Otherwise, return the requested data item for the specified element.
    return {data_item: element_data[data_item].values[0]}
