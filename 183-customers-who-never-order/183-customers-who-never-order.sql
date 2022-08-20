# Write your MySQL query statement below

SELECT c.name  AS 'Customers' from customers c
WHERE c.id NOT IN (
select customerId from Orders
);
