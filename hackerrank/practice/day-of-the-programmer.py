"""
dd.mm.year
if leap_year:
if 1918:
"""

def gregorianLeapYear(year):
    return ((year % 400 == 0) or ((year % 4 == 0) and (year % 100 != 0)))

def julianLeapYear(year):
    return (year % 4 == 0)

def dayOfProgrammer(year):
    if (year < 1918):
        if (not julianLeapYear(year)):
            year = str(year)
            return ("13.09." + year)
        else:
            year = str(year)
            return ("12.09." + year)
    elif (year == 1918):
        return ("28.09.1918")
    elif (not gregorianLeapYear(year)):
        year = str(year)
        return ("13.09." + year)
    else:
        year = str(year)
        return ("12.09." + year)
