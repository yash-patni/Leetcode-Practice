# Write your MySQL query statement below
SELECT teacher_id, COUNT(DISTINCT(subject_id)) as cnt
FROM TEACHER
GROUP BY TEACHER_ID