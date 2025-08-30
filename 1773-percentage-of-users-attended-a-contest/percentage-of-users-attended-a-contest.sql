select t2.contest_id, round(((count(t2.contest_id)*100)/(select count(*) from users)),2) 
as percentage
from users t1
join register t2
on t1.user_id= t2.user_id
group by t2.contest_id
order by percentage desc, contest_id asc;