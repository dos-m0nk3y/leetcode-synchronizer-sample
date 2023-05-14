# Write your MySQL query statement below

SELECT person.firstName, person.lastName, address.city, address.state
FROM
  person
  LEFT OUTER JOIN Address ON person.personId = address.personId;