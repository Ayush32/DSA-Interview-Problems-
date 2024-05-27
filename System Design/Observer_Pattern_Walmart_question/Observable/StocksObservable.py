from abc import ABC, abstractmethod
from observer.NotificationAlertObserver import NotificationAlertObserver

# making interface 
class StocksObservable(ABC):
    """
    The StocksObservable interface declares a set of methods for managing subscribers.
    """

    # abstract class
    @abstractmethod
    def add(self,observer : NotificationAlertObserver):
        pass
    
    @abstractmethod
    def remove(self,observer : NotificationAlertObserver):
        pass

    @abstractmethod
    def notifySubscribers(self):
        pass

    @abstractmethod
    def setStockCount(self,newStockAdded):
        pass

    @abstractmethod
    def getStockCount(self):
        pass

