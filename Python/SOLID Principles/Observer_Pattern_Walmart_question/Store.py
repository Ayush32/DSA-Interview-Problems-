from Observable.IphoneObservableImplementation import IphoneObservableImplementation
from Observable.StocksObservable import StocksObservable
from observer.EmailAlertObserver import EmailAlertObserver
from observer.MobileAlertObserver import MobileAlertObserver

 # create the observable
iphoneStock = IphoneObservableImplementation()

# create observers
emailObserver1 = EmailAlertObserver("xyz@gmail.com",iphoneStock)
emailObserver2 = EmailAlertObserver("xyz2@gmail.com",iphoneStock)
mobileObserver3 = MobileAlertObserver("xyz_username",iphoneStock)

# add observers to the Observable
iphoneStock.add(emailObserver1)
iphoneStock.add(emailObserver2)
iphoneStock.add(mobileObserver3)

# change the stock count and notify observers/user
iphoneStock.setStockCount(10)
iphoneStock.setStockCount(0)
iphoneStock.setStockCount(100)



