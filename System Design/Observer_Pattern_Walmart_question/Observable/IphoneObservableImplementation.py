from Observable.StocksObservable import StocksObservable 
from observer.NotificationAlertObserver import NotificationAlertObserver

class IphoneObservableImplementation(StocksObservable):
    '''
    The StocksObservable owns some important state and notifies observers when the state
    changes.
    '''

    def __init__(self):
        self._observers = []
        self._stockCount = 0

    def add(self,observer : NotificationAlertObserver):
        self._observers.append(observer)
    
    def remove(self,observer : NotificationAlertObserver):
        self._observers.remove(observer)

    """
        Trigger an update in each subscriber.
    """

    def notifySubscribers(self):
         for observer in self._observers:
            observer.update()

    """
        Usually, the subscription logic is only a fraction of what a Subject can
        really do. Subjects commonly hold some important business logic, that
        triggers a notification method whenever something important is about to
        happen (or after it).
    """

    def setStockCount(self, newStockAdded):
        if self._stockCount == 0:
            self.notifySubscribers()
        self._stockCount = self._stockCount + newStockAdded
    
    def getStockCount(self):
        return self._stockCount

    


