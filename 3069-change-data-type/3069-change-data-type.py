import pandas as pd

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
    convert_dict = {'grade': int}
    students = students.astype(convert_dict)
    return students