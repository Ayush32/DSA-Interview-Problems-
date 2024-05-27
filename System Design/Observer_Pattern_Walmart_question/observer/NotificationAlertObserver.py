from abc import ABC, abstractmethod



class NotificationAlertObserver:
    """
    The NotificationAlertObserver interface declares the update method, used by StockObservable.
    """

    @abstractmethod
    def update(self):
        pass