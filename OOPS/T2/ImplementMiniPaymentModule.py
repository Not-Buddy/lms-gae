from abc import ABC, abstractmethod

class Payment(ABC):
    @abstractmethod
    def pay(self, amount: float):
        pass


class UPIPayment(Payment):
    def pay(self, amount: float):
        return f"UPI Payment of ₹{float(amount)} successful"


class CardPayment(Payment):
    def pay(self, amount: float):
        return f"Card Payment of ₹{float(amount)} successful"


class WalletPayment(Payment):
    def pay(self, amount: float):
        return f"Wallet Payment of ₹{float(amount)} successful"


class Solution:
    def processPayment(self, mode: str, amount: float):
        mode = mode.upper()

        if mode == "UPI":
            payment = UPIPayment()
        elif mode == "CARD":
            payment = CardPayment()
        elif mode == "WALLET":
            payment = WalletPayment()
        else:
            return

        return payment.pay(amount)
