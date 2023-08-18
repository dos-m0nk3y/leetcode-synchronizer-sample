# Write your MySQL query statement below

SELECT DISTINCT c1.seat_id AS seat_id
FROM
  cinema AS c1
  INNER JOIN cinema AS c2 ON abs(c1.seat_id - c2.seat_id) = 1 AND c1.free AND c2.free
ORDER BY c1.seat_id;