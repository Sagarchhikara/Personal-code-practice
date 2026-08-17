CREATE DATABASE CU;

USE CU;

CREATE TABLE customers (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(50),
    city VARCHAR(50)
);

CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    customer_id INT,
    order_amount DECIMAL(10, 2),
    order_date DATE,
    FOREIGN KEY (customer_id) REFERENCES customers (customer_id)
);

INSERT INTO
    customers (
        customer_id,
        customer_name,
        city
    )
VALUES (1, 'Sagar', 'Delhi'),
    (2, 'Asha', 'Mumbai'),
    (3, 'Rohan', 'Chennai');

INSERT INTO
    orders (
        order_id,
        customer_id,
        order_amount,
        order_date
    )
VALUES (101, 1, 2500.00, '2026-08-01'),
    (102, 2, 1800.50, '2026-08-02'),
    (103, 1, 3200.75, '2026-08-03'),
    (104, 4, 900.00, '2026-08-04');

SELECT c.customer_id, c.customer_name, c.city, o.order_id, o.order_amount, o.order_date
FROM customers c
    INNER JOIN orders o ON c.customer_id = o.customer_id;