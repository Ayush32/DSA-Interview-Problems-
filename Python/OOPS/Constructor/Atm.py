class Atm:
    
    #constructor
    def __init__(self) -> None:
        self.pin = ""
        self.balance = 0
        self.isPinSet = False
        self.menu()
        
        
    def menu(self):
        user_input = input("""
        Hello, how you like to proceed?
        1. Enter 1 to create pin
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
        self.pin = int(input("Enter Your pin"))
        print("Pin Set Successfully")
        self.isPinSet = True
        self.menu()       
         
    def deposit(self):
        if self.isPinSet == False:
            print("Please Create your Pin first then Try Again")
            self.create_pin()
        temp = int(input("Enter your pin"))
        if temp == self.pin:
            amount = int(input("Enter Your Amout to Deposit"))
            self.balance = self.balance + amount
            print("Depoisted Successfully")
        else:
            print("Invalid Pin")
        self.menu()       
    
    def withdraw(self):
        if self.isPinSet == False:
            print("Please Create your Pin first then Try Again")
            self.create_pin()
        temp = int(input("Enter your pin"))
        if temp == self.pin:
            amount = int(input("Enter Your Amout to Withdraw"))
            if amount < self.balance:
                self.balance = self.balance - amount
                print("Please Collect Your Money: ", amount)
            else:
                print("ot sufficient fund to withdraw")  
        else:
            print("Invalid Pin")
        self.menu()   
    
    def check_balance(self):
        if self.isPinSet == False:
            print("Please Create your Pin first then Try Again")
            self.create_pin()
        temp = int(input("Enter your pin"))
        if temp == self.pin:
            print("Balance: ",self.balance)
        else:
            print("Invalid Pin")
        self.menu()   
    
    
       
sbi = Atm()
# sbi.deposit()
# print(sbi)