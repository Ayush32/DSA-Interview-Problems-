class Atm:
    
    #constructor
    def __init__(self) -> None:
        self.__pin = ""
        self.__balance = 0
        self.ispinSet = False
        self.menu()
        
        
    def menu(self):
        user_input = input("""
        Hello, how you like to proceed?
        1. Enter 1 to create __pin
        2. Enter 2 to depost
        3. Enter 3 to withdraw
        4. Enter 4 to check balance
        5. Enter 5 to Exit
                           """)                            
    
        if user_input == "1":
            # call th function if user choose 1 option
            self.create_pin()
        elif user_input == "2":
            self.deposit()
        elif user_input == "3":
            self.withdraw()
        elif user_input == "4":
            self.check_balance()
        else:
            print("Thank you for Using the SBI ATM")
            return 
    
    def create_pin(self):
        self.__pin = int(input("Enter Your __pin"))
        print("__pin Set Successfully")
        self.ispinSet = True
        self.menu()       
         
    def deposit(self):
        if self.ispinSet == False:
            print("Please Create your pin first then Try Again")
            self.create_pin()
        temp = int(input("Enter your __pin"))
        if temp == self.__pin:
            amount = int(input("Enter Your Amout to Deposit"))
            self.__balance = self.__balance + amount
            print("Depoisted Successfully")
        else:
            print("Invalid pin")
        self.menu()       
    
    def withdraw(self):
        if self.ispinSet == False:
            print("Please Create your pin first then Try Again")
            self.create_pin()
        temp = int(input("Enter your __pin"))
        if temp == self.__pin:
            amount = int(input("Enter Your Amout to Withdraw"))
            if amount < self.__balance:
                self.__balance = self.__balance - amount
                print("Please Collect Your Money: ", amount)
            else:
                print("ot sufficient fund to withdraw")  
        else:
            print("Invalid pin")
        self.menu()   
    
    def check_balance(self):
        if self.ispinSet == False:
            print("Please Create your pin first then Try Again")
            self.create___pin()
        temp = int(input("Enter your __pin"))
        if temp == self.__pin:
            print("balance: ",self.__balance)
        else:
            print("Invalid __pin")
        self.menu()   
    
    
       
sbi = Atm()
# print(sbi.__pin())
print(sbi._Atm__balance)
# print(sbi)