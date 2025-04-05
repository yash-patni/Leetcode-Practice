# Write your MySQL query statement below
UPDATE SALARY SET sex=
CASE sex
    WHEN 'm' THEN 'f'
    ELSE 'm'
END;