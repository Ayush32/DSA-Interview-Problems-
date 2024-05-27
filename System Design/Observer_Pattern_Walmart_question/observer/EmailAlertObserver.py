from Observable.StocksObservable import StocksObservable
from observer.NotificationAlertObserver import NotificationAlertObserver

class EmailAlertObserver(NotificationAlertObserver):

    

    def __init__(self,emailId : str,observable :  StocksObservable):
        self.observable = observable
        self.emailId = emailId


    def update(self):
        self.sendMail(self.emailId,"Product is in Stock hurry up!")

    def sendMail(self,emailId : str,msg : str):
        print("Mail sent to {}: {}".format(emailId, msg))


