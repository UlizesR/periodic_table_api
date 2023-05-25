"""
This is an API that will be used to access information about 
Elements in the Periodic Table.
"""

from fastapi import FastAPI, HTTPException
from typing import Union
import pandas as pd

app = FastAPI()

df = pd.read_csv('Periodic_Table.csv')

@app.get("/element/{element_identifier}")
async def read_element(element_identifier: Union[int, str]):

    if element_data.empty:
        raise HTTPException(status_code=404, detail="Element not found: no element identifier provided")
    # Check if the identifier is an integer (atomic number) or a string (element name)
    if isinstance(element_identifier, int):
        if element_identifier not in df['atomic_number'].values:
            raise HTTPException(status_code=404, detail="Element not found: invalid atomic number")
        element_data = df[df['atomic_number'] == element_identifier]
    else:
        if element_identifier not in df['element'].values:
            raise HTTPException(status_code=404, detail="Element not found: invalid element name")
        element_data = df[df['element'] == element_identifier]

    # Otherwise, return the element data as JSON.
    return element_data.to_dict(orient='records')[0]