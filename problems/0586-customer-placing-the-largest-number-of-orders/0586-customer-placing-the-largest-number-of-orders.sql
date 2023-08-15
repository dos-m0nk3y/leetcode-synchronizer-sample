# Write your MySQL query statement below

SELECT customer_number
FROM orders
GROUP BY customer_number
HAVING
  COUNT(order_number) = (
    SELECT MAX(order_count)
    FROM (SELECT COUNT(order_number) AS order_count FROM orders GROUP BY customer_number) AS T
  );