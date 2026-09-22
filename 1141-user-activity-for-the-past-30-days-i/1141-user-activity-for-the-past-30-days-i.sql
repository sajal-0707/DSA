# Write your MySQL query statement below
select d.activity_date as day, count(distinct(d.user_id)) as active_users 
from activity as d 
where d.activity_date >= '2019-06-28' and d.activity_date<= '2019-07-27' 
group by activity_date;