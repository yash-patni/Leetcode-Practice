# Write your MySQL query statement below
SELECT user_id, COUNT(DISTINCT follower_id) as followers_count
FROM FOLLOWERS
GROUP BY USER_ID
ORDER BY USER_ID