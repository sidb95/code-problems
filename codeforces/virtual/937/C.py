"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. hh:mm
#
#
#
# Out:
# 1. hh:mm AM / PM
#
#
# Solution:
#
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        s1 = str(s[2]) + str(s[3]) + str(s[4])
        hours = ["01", "02", "03", "04", "05", "06", "07", "08", "09", "10", 
                 "11"]
        h = s[0:2]
        if (h in hours):
            print(h + s1 + " AM")
        else:
            if (h == "00"):
                print("12" + s1 + " AM")
            elif (h == "12"):
                print("12" + s1 + " PM")
            else:
                if (int(h) > 12):
                    print(hours[int(h) - 12 - 1] + s1 + " PM")
                else:
                    print(s + " AM")
                #
            #
        #
    #
    return


__main__()
