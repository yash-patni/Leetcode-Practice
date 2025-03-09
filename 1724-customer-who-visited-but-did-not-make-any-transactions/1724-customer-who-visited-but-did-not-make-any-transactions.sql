# Write your MySQL query statement below
SELECT DISTINCT V.CUSTOMER_ID, COUNT(V.VISIT_ID) AS COUNT_NO_TRANS
FROM VISITS V
LEFT JOIN TRANSACTIONS T
ON V.VISIT_ID = T.VISIT_ID
WHERE T.TRANSACTION_ID IS NULL
GROUP BY CUSTOMER_ID