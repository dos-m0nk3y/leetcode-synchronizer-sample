# Write your MySQL query statement below

SELECT person.firstName AS firstName, person.lastName AS lastName, address.city AS city, address.state AS state
FROM
  person
  LEFT OUTER JOIN address ON person.personId = address.personId;