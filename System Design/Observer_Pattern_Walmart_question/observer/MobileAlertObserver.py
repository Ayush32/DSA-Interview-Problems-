from Observable.StocksObservable import StocksObservable
from observer.NotificationAlertObserver import NotificationAlertObserver

class MobileAlertObserver(NotificationAlertObserver):

    

    def __init__(self,userName : str,observable :  StocksObservable):
        self.observable = observable
        self.userName = userName


    def update(self):
        self.sendMsgOnMobile(self.userName,"Product is in Stock hurry up!")

    def sendMsgOnMobile(self,userName : str,msg : str):
        print("Mail sent to {}: {}".format(userName, msg))


