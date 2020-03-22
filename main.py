'''

Print out the drives_right column as a Series using loc or iloc.
Print out the drives_right column as a DataFrame using loc or iloc.
Print out both the cars_per_cap and drives_right column as a DataFrame using loc or iloc.

'''

# Print out drives_right column as Series
print(cars.loc[:,"drives_right"])

# Print out drives_right column as DataFrame
print(cars.loc[:,["drives_right"]])

# Print out cars_per_cap and drives_right as DataFrame
print(cars.loc[:,["cars_per_cap","drives_right"]])

'''

<script.py> output:
    US      True
    AUS    False
    JPN    False
    IN     False
    RU      True
    MOR     True
    EG      True
    Name: drives_right, dtype: bool
         drives_right
    US           True
    AUS         False
    JPN         False
    IN          False
    RU           True
    MOR          True
    EG           True
         cars_per_cap  drives_right
    US            809          True
    AUS           731         False
    JPN           588         False
    IN             18         False
    RU            200          True
    MOR            70          True
    EG             45          True
'''