CREATE DATABASE CU;

USE CU;

show tables;

create table student (
    id int primary key,
    name varchar(50),
    age int,
    email varchar(50)
);

select * from student;

insert into student (id, name, age, email) values (2, 'Jane Smith', 22, 'jane.smith@example.com' );
select * from student;

insert into student (id, name, age, email) values (3, 'Alice Johnson', 21, 'alice.johnson@example.com');