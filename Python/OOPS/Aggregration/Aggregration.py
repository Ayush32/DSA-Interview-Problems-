class Customer:
    
    def __init__(self,name,gender,address) -> None:
        self.name = name
        self.gender = gender
        self.address = address
    
    def edit_profile(self,new_name,new_city,new_pin,new_state):
        self.name = new_name
        self.address.change_address(new_city,new_pin,new_state)    

class Address:
    
    def __init__(self,city,pincode,state) -> None:
        self.city = city
        self.pincode = pincode
        self.state = state
    
    def change_address(self,new_city,new_pin,new_state):
        self.city = new_city
        self.pincode = new_pin
        self.state = new_state  
        
add = Address("Gorakhpur",273013,"Uttar Pradesh")
cust = Customer("Ayush","male",add)

cust.edit_profile("Ankit","indore",142431,"MP")
print(cust.address.city)