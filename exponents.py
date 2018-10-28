iterations = int(input("Enter the number of iterations: "))
x = int(input("Enter the value for x: "))

if iterations <= 0:
    print(0)
else:
    result = 1
    
    for i in range(1, iterations):
        top = x ** i
        
        bot = 1;
        for j in range(2, i+1):
            bot *= j
        
        result += top / bot
    
    print(result)