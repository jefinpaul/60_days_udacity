# Dictionary of dictionaries
europe = { 'spain': { 'capital':'madrid', 'population':46.77 },
           'france': { 'capital':'paris', 'population':66.03 },
           'germany': { 'capital':'berlin', 'population':80.62 },
           'norway': { 'capital':'oslo', 'population':5.084 } }


# Print out the capital of France
print(europe['france'])

# Create sub-dictionary data
data={'population': 59.83,'capital': 'rome'}

# Add data to europe under key 'italy'
europe['italy']= data

# Print europe
print(europe)

################################################################################################

Use Boolean conditions to subset for rows in 2010 and 2011, and print the results.
Set the index to the date column.
Use .loc[] to subset for rows in 2010 and 2011.
Use .loc[] to subset for rows from Aug 2010 to Feb 2011.


# Use Boolean conditions to subset temperatures for rows in 2010 and 2011
print(temperatures[(temperatures["date"] >= "2010") & (temperatures["date"] < "2012")])

# Set date as an index
temperatures_ind = temperatures.set_index("date")

# Use .loc[] to subset temperatures_ind for rows in 2010 and 2011
print(temperatures_ind.loc["2010":"2011"])

# Use .loc[] to subset temperatures_ind for rows from Aug 2010 to Feb 2011
print(temperatures_ind.loc["2010-08":"2011-02"])

########################################################################################
Add a year column to temperatures, from the year component of the date column.
Make a pivot table of the avg_temp_c column,
with country and city as rows, and year as columns.
Assign to temp_by_country_city_vs_year, and look at the result.


# Add a year column to temperatures
temperatures["year"] = temperatures["date"].dt.year

# Pivot avg_temp_c by country and city vs year
temp_by_country_city_vs_year = temperatures.pivot_table("avg_temp_c", index = ["country", "city"], columns = "year")

# See the result
print(temp_by_country_city_vs_year)
