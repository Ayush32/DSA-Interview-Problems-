''' Today, I'll explain the second one i.e. 𝐎𝐩𝐞𝐧/𝐂𝐥𝐨𝐬𝐞𝐝 𝐏𝐫𝐢𝐧𝐜𝐢𝐩𝐥𝐞 in very simple terms. 

The Open/Closed Principle(OCP) states that software entities (like classes, modules, functions, etc.) should be open for extension but closed for modification.

This means that you should be able to extend the behaviour of a system without modifying the existing code.

𝐄𝐱𝐚𝐦𝐩𝐥𝐞- 𝐍𝐨𝐭 𝐅𝐨𝐥𝐥𝐨𝐰𝐢𝐧𝐠 𝐭𝐡𝐞 𝐎𝐂𝐏

𝐒𝐜𝐞𝐧𝐚𝐫𝐢𝐨: Let's consider a simple payment processing system in an e-commerce application. Initially, it supports only credit card payments.

𝐏𝐫𝐨𝐛𝐥𝐞𝐦: If you want to add support for another payment type, like PayPal, you'd need to modify the PaymentProcessor class by adding a new condition.
This modification violates the Open/Closed Principle because the PaymentProcessor class has to be modified every time a new payment method is added.

𝐒𝐨𝐥𝐮𝐭𝐢𝐨𝐧 -> 𝐅𝐨𝐥𝐥𝐨𝐰𝐢𝐧𝐠 𝐭𝐡𝐞 𝐎𝐂𝐏

To follow the OCP, we can use polymorphism by creating an abstract base class or interface for payment processing and then implementing specific payment processors for each payment type.

Now, when you want to add a new payment type, such as “PayPal” or “Bitcoin", you only need to create a new class that extends PaymentProcessor without changing the existing code.

This approach follows the Open/Closed Principle because the existing classes remain unchanged, and new functionality can be added by extending the base class.
'''