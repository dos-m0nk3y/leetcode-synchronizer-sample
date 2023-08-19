# Write your MySQL query statement below

SELECT x, y, z, IF(GREATEST(x, y, z) < LEAST(x + y, y + z, z + x), 'Yes', 'No') AS triangle
FROM triangle;