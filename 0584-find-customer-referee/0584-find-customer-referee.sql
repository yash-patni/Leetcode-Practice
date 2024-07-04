/* Write your PL/SQL query statement below */
SELECT name 
from Customer c
where c.referee_id != 2 or c.referee_id is null;