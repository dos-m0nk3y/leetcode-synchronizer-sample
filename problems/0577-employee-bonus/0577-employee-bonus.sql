# Write your MySQL query statement below

SELECT employee.name AS name, bonus.bonus AS bonus
FROM
  employee
  LEFT OUTER JOIN bonus ON employee.empId = bonus.empId
WHERE bonus.bonus IS NULL OR bonus.bonus < 1000;