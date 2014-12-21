def exp(x, n):
    if n < 0:
        return 1.0/power(x, - n)
    elif n == 0:
        return 1
    else:
        return power(x, n)
    
def power(x, n):
    if n == 1:
        return x    
    if n % 2 == 0:
        return power(x**2, n/2)
    else:
        return x*power(x, n-1)
