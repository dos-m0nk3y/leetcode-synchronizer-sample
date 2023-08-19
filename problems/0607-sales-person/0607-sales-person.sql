# Write your MySQL query statement below

SELECT name
FROM salesperson
WHERE
  sales_id NOT IN (
    SELECT
      sales_id
    FROM
      orders
      INNER JOIN company USING (com_id)
    WHERE name = 'RED'
  );