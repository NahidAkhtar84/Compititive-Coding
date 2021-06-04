# Enter your code here. Read input from STDIN. Print output to STDOUT

date_returned = str(input()).split(" ")
date_due = str(input()).split(" ")
fine = 0

def fine_counter(date_returned, date_due):
    
    ret_year = int(date_returned[2])
    due_year = int(date_due[2])
    
    ret_month = int(date_returned[1])
    due_month = int(date_due[1])
    
    ret_day = int(date_returned[0])
    due_day = int(date_due[0])
    
    
    if ret_year > due_year:
        fine = 10000
        return fine
    elif ret_year == due_year:
        if ret_month > due_month:
            fine = (ret_month - due_month) * 500
            return fine
        elif ret_month == due_month:
            if ret_day > due_day:
                fine = (ret_day - due_day) * 15
                return fine
            else:
                fine = 0
                return fine
        else:
            return 0    
    else:
        return 0
                

f = fine_counter(date_returned, date_due)
print(f)
