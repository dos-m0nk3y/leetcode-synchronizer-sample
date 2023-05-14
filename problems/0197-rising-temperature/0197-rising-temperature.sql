# Write your MySQL query statement below

SELECT w1.id AS Id
FROM
  weather AS w1
  INNER JOIN weather AS w2 ON w1.recordDate = ADDDATE(w2.recordDate, 1)
WHERE w1.temperature > w2.temperature;