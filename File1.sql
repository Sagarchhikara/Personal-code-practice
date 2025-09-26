use dbg4;

SELECT * from student;

use dbg4;

CREATE TABLE exam_result (
    roll_no INT PRIMARY KEY,
    sname VARCHAR(25) NOT NULL,
    gender CHAR(1) CHECK (gender IN ('M', 'F')),
    exam_date DATE,
    sub_name1 VARCHAR(25) NOT NULL,
    sub_name2 VARCHAR(25) NOT NULL,
    marks1 INT CHECK (marks1 BETWEEN 0 AND 100),
    marks2 INT CHECK (marks2 BETWEEN 0 AND 100)
);

SELECT * FROM exam_result;

INSERT INTO
    exam_result (
        roll_no,
        sname,
        gender,
        exam_date,
        sub_name1,
        sub_name2,
        marks1,
        marks2
    )
VALUES (
        1,
        'John Doe',
        'M',
        '2023-10-01',
        'Math',
        'Science',
        85,
        90
    );

SELECT * FROM exam_result;

use dbg4

CREATE DATABASE project;

SHOW DATABASES;

USE project;

CREATE table users (
    userid INT PRIMARY KEY AUTO_INCREMENT,
    username VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL UNIQUE,
    phone VARCHAR(20) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL
);

CREATE TABLE movies (
    movieid INT PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(255) NOT NULL,
    genre VARCHAR(100) NOT NULL,
    language VARCHAR(50),
    duration INT CHECK (duration > 0),
    rating DECIMAL(3, 1) CHECK (rating BETWEEN 0 AND 10)
);

INSERT INTO
    users (
        username,
        email,
        phone,
        password
    )
VALUES (
        'john_doe',
        'john.doe@email.com',
        '+1234567890',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'jane_smith',
        'jane.smith@email.com',
        '+1987654321',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'mike_wilson',
        'mike.wilson@email.com',
        '+1555123456',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'sarah_jones',
        'sarah.jones@email.com',
        '+1555987654',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'david_brown',
        'david.brown@email.com',
        '+1444333222',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'emily_davis',
        'emily.davis@email.com',
        '+1666777888',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'robert_taylor',
        'robert.taylor@email.com',
        '+1777888999',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'lisa_miller',
        'lisa.miller@email.com',
        '+1888999000',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'james_wilson',
        'james.wilson@email.com',
        '+1999000111',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    ),
    (
        'amy_clark',
        'amy.clark@email.com',
        '+1222333444',
        '$2y$10$92IXUNpkjO0rOQ5byMi.Ye4oKoEa3Ro9llC/.og/at2.uheWG/igi'
    );

use dbg4

create table if not exists customer01 (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL,
    gender CHAR(1) NOT NULL CHECK (gender IN ('M', 'F')),
    contact_number VARCHAR(15) NOT NULL UNIQUE
);

INSERT INTO
    customer01 (name, gender, contact_number)
VALUES (
        'Alice Johnson',
        'F',
        '555-0101'
    ),
    ('Bob Smith', 'M', '555-0102'),
    (
        'Charlie Brown',
        'M',
        '555-0103'
    ),
    (
        'Diana Prince',
        'F',
        '555-0104'
    ),
    ('Evan Davis', 'M', '555-0105'),
    (
        'Fiona Clark',
        'F',
        '555-0106'
    ),
    (
        'George Wilson',
        'M',
        '555-0107'
    ),
    (
        'Hannah Martinez',
        'F',
        '555-0108'
    ),
    (
        'Ian Thompson',
        'M',
        '555-0109'
    ),
    (
        'Jessica Garcia',
        'F',
        '555-0110'
    );

CREATE TABLE product (
    p_id INT PRIMARY KEY AUTO_INCREMENT,
    brand VARCHAR(100) NOT NULL,
    category VARCHAR(100) NOT NULL,
    sub_category VARCHAR(100),
    price DECIMAL(10, 2) NOT NULL check (price >= 0),
    quantity INT NOT NULL
)

INSERT INTO
    product (
        brand,
        category,
        sub_category,
        price,
        quantity
    )
VALUES (
        'Apple',
        'Electronics',
        'Smartphone',
        999.99,
        25
    ),
    (
        'Samsung',
        'Electronics',
        'Tablet',
        449.99,
        18
    ),
    (
        'Nike',
        'Clothing',
        'Running Shoes',
        129.99,
        40
    ),
    (
        'Sony',
        'Electronics',
        'Headphones',
        199.99,
        30
    ),
    (
        'Adidas',
        'Clothing',
        'T-Shirt',
        29.99,
        100
    ),
    (
        'KitchenAid',
        'Home & Kitchen',
        'Mixer',
        299.99,
        15
    ),
    (
        'Dell',
        'Electronics',
        'Laptop',
        1299.99,
        12
    ),
    (
        'Levi''s',
        'Clothing',
        'Jeans',
        59.99,
        75
    ),
    (
        'Philips',
        'Home & Kitchen',
        'Air Fryer',
        89.99,
        22
    ),
    (
        'Canon',
        'Electronics',
        'Camera',
        749.99,
        8
    );

SELECT * FROM product;

CREATE table sale_details (
    sale_id int PRIMARY KEY AUTO_INCREMENT,
    sale_date DATE DEFAULT(CURRENT_DATE),
    c_id INT,
    p_id int,
    quantity INT NOT NULL,
    price DECIMAL(10, 2) NOT NULL,
    amount DECIMAL(10, 2) NOT NULL,
    FOREIGN KEY (c_id) REFERENCES customer01 (id),
    FOREIGN KEY (p_id) REFERENCES product (p_id)
)

INSERT INTO
    sale_details (
        c_id,
        p_id,
        quantity,
        price,
        amount
    )
VALUES (1, 5, 3, 29.99, 89.97),
    (2, 1, 1, 999.99, 999.99),
    (3, 4, 2, 199.99, 399.98),
    (5, 9, 1, 89.99, 89.99),
    (5, 5, 1, 29.99, 29.99),
    (7, 8, 2, 59.99, 119.98),
    (8, 3, 1, 129.99, 129.99),
    (10, 10, 1, 749.99, 749.99),
    (4, 2, 1, 449.99, 449.99),
    (6, 6, 1, 299.99, 299.99);
-- Fiona buys a Mixer
SELECT * FROM sale_details;

-- query in sql
1. SELECT<ATTRIBUTE>
2.FROM<TABLE>
3.WHERE<CONDITION> -- filter records 
4.GROUP BY<ATTRIBUTE> -- aggregate functions summarize data 
5.HAVING<CONDITION> -- filter groups 
6.ORDER BY<ATTRIBUTE> [ASC|DESC] -- sort records
7.LIMIT<N> -- limit number of records
8.OFFSET<N> -- skip number of records

SELECT * FROM sale_details WHERE c_id = 3 AND p_id = 4;

SELECT *
FROM sale_details
WHERE (
        c_id = 3
        AND p_id = 4
    )
    OR quantity > 2;

SELECT c_id, name, p_id, quantity
FROM sale_details, customer01
WHERE
    sale_details.c_id = customer01.id;

create database st3;

use st3;

create table customer like project.customer01;

insert into st3.customer select * from project.customer01;

create table sales_details like project.sale_details;

insert into st3.sales_details select * from project.sale_details;

create table product like project.product;

insert into st3.product select * from project.product;

select * from product;

alter table product add column discount int1;

desc product;

update product set discount = 5;

select discount from product;

create view product_view1 as
select
    p_id,
    brand,
    category,
    sub_category,
    price,
    quantity
from product;

select * from product_view1;

insert into
    product_view1 (
        brand,
        category,
        sub_category,
        price,
        quantity
    )
VALUES (
        'being human',
        'jeans',
        'A',
        3200,
        10
    );

select * from product_view1;

select * from product;

update product_view1
set
    quantity = quantity + 10
where
    brand = 'being human';

INSERT into
    product_view1 (
        brand,
        category,
        sub_category,
        price,
        quantity
    )
VALUES (
        'being human',
        'jeans',
        'A',
        3200,
        10
    );

select * from product;

--stored procedures : named collection of commands
-- need to call it to execute it COMMENT

DELIMITER /
/

CREATE PROCEDURE product_p1() 
begin 
    INSERT into product (brand,category,sub_category,price,quantity)
    VALUES ('puma','shoes','sports',4500,20);
    select * from product where p_id>5;
    end
/
/
;
DELIMITER;

CALL product_p1 ();

DELIMITER /
/

delimiter /
/

create procedure product_p3(IN id int1)
begin
delete from product where p_id = id;
update product set discount = discount+1;
select * from product where p_id > 5;
end
/
/

delimiter;

call product_p3 (9);

delimiter /
/

create procedure product_p4(IN id int1 , IN disc int1)
begin
delete from product where p_id = id;
update product set discount = disc;
select * from product where p_id > 5;
end
/
/

delimiter;

call product_p4 (10, 6);

DELIMITER / /
CREATE PROCEDURE product_p5 (OUT p_count INT) begin
SELECT *
from product into p_count;

end / / DELIMITER;

CALL product_p5 (@total);