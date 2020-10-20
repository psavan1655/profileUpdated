import time

from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.by import By

PATH = "/Users/savanpatel/savan-Projects/webScrapping/chromedriver"
driver = webdriver.Chrome(PATH)

# Username and Password here
USERNAME = "savan.patell"
PASSWORD = "<<Enter password here>>"

driver.get("https://www.instagram.com/accounts/login/?hl=en")
time.sleep(2)

# Entering username
username = driver.find_element_by_xpath(
    "/html/body/div[1]/section/main/div/article/div/div[1]/div/form/div[2]/div/label/input")
username.send_keys(USERNAME)

# Entering password
password = driver.find_element_by_xpath(
    "/html/body/div[1]/section/main/div/article/div/div[1]/div/form/div[3]/div/label/input")
password.send_keys(PASSWORD)

# Login button click
login = driver.find_element_by_xpath(
    "/html/body/div[1]/section/main/div/article/div/div[1]/div/form/div[4]/button")
login.send_keys(Keys.RETURN)
time.sleep(5)

# notification dialog
noti = driver.find_element_by_xpath(
    "/html/body/div[4]/div/div/div[3]/button[2]").send_keys(Keys.RETURN)
time.sleep(3)

# Searching th celebrity name
searching = driver.find_element_by_xpath(
    "/html/body/div[1]/section/nav/div[2]/div/div/div[2]/input")
searching.send_keys("cristiano")
time.sleep(9)
# searching.send_keys(Keys.ENTER)
for i in range(0, 50):
    try:
        def follow(): return driver.find_element_by_xpath(
            '/html/body/div[1]/section/main/div/header/section/div[1]/div[1]/span/span[1]/button').send_keys(Keys.RETURN)
    except:
        print("Failed operation follow")
        pass
    time.sleep(2)
    try:
        def unfollow(): return driver.find_element_by_xpath(
            '/html/body/div[1]/section/main/div/header/section/div[1]/div[1]/span/span[1]/button').send_keys(Keys.RETURN)
        time.sleep(1.5)
    except:
        print("Failed operation unfollow")
        pass
    try:
        def unfollownoti(): return driver.find_element_by_xpath(
            '/html/body/div[4]/div/div/div[3]/button[1]').send_keys(Keys.RETURN)
        time.sleep(2)
        print(i)
    except:
        print("Failed operation noti")
        pass

time.sleep(5)
for i in range(0, 10):
    follow = driver.find_element_by_xpath(
        '//button[text()="Follow"]').send_keys(Keys.RETURN)

    time.sleep(2.5)
    unfollow = driver.find_element_by_xpath(
        "/html/body/div[1]/section/main/div/header/section/div[1]/div[1]/span/span[1]/button")
    unfollow.send_keys(Keys.RETURN)
    time.sleep(1.5)
    unfollownoti = driver.find_element_by_xpath(
        '//button[text()="Unfollow"]').send_keys(Keys.RETURN)
    time.sleep(2.5)
    print(i)
for i in range(0, 10):
    follow = driver.find_element_by_xpath(
        '//button[text()="Follow"]').send_keys(Keys.RETURN)

    time.sleep(2)
    unfollow = driver.find_element_by_css_selector(
        "#react-root > section > main > div > header > section > div.nZSzR > div.Igw0E.IwRSH.eGOV_._4EzTm > span > span.vBF20._1OSdk > button")
    unfollow.send_keys(Keys.RETURN)
    time.sleep(1.5)
    unfollownoti = driver.find_element_by_xpath(
        '//button[text()="Unfollow"]').send_keys(Keys.RETURN)
    time.sleep(2)
    print(i)
for i in range(0, 10):
    follow = driver.find_element_by_xpath(
        '//button[text()="Follow"]').send_keys(Keys.RETURN)

    time.sleep(2)
    unfollow = driver.find_element_by_css_selector(
        "#react-root > section > main > div > header > section > div.nZSzR > div.Igw0E.IwRSH.eGOV_._4EzTm > span > span.vBF20._1OSdk > button")
    unfollow.send_keys(Keys.RETURN)
    time.sleep(1.5)
    unfollownoti = driver.find_element_by_xpath(
        '//button[text()="Unfollow"]').send_keys(Keys.RETURN)
    time.sleep(2)
    print(i)
time.sleep(7)
driver.quit()
