# api = "http://indianrailapi.com/api/v2/TrainSchedule/apikey/ffe1d62713c139affe1cc424e3a09ce5/TrainNumber/22692/"

import requests
class TrainSchdule:
    
    # def __init__(self) -> None:
    #     self.trai = ""
    #     self.balance = 0
    #     self.isPinSet = False
    #     self.menu()
        
    def __init__(self):
        user_input = input("""
        Hello, how you like to proceed?
        1. Enter 1 Check Live Train Status
        2. Enter 2 to Check PNR
        3. Enter 3 to check train schedule""") 

        
        if user_input == "1":
            # call th function if user choose 1 option
            print("Live Train Status")
        elif user_input == "2":
            print("PNR")
        else:
            self.train_schedule()
            
    def train_schedule(self):
        train_number = int(input("Enter the Train No."))
        self.fetch_data(train_number)
             
    def fetch_data(self,train_num):
        api = f'http://indianrailapi.com/api/v2/TrainSchedule/apikey/ffe1d62713c139affe1cc424e3a09ce5/TrainNumber/{train_num}/'
        response = requests.get(api)
        
        if response.status_code == 200:
            data = response.json()
            for i in data.get('Route',[]):
                print(i['StationName'],i['ArrivalTime'],i['DepartureTime'],i['Distance'])
        # print(data)
        else:
            print("Failed to Retireve the data")
        
        
train = TrainSchdule()