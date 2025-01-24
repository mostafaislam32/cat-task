
CREATE DATABASE product;
USE product;
CREATE TABLE t(
product_id INT NOT NULL AUTO_INCREMENT,
product_name varchar(200) not NULL,
is_recylable BOOLEAN NOT NULL,
is_low_fat BOOLEAN NOT NULL,
PRIMARY KEY (product_id)
);

INSERT INTO t (product_name,is_recylable,is_low_fat)
VALUES 
('Product A',TRUE,TRUE),('Product B',TRUE,FALSE),
('Product C',FALSE,TRUE),('Product D',TRUE,TRUE);


SELECT product_id , product_name FROM t
WHERE is_recylable = TRUE and is_low_fat = TRUE;