# Write your MySQL query statement below

SELECT IFNULL(ROUND(COUNT(DISTINCT requester_id, accepter_id) / COUNT(DISTINCT sender_id, send_to_id), 2), 0) AS accept_rate
FROM
  friendrequest,
  requestaccepted;