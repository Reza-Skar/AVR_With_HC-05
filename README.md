# AVR_With_HC-05
a AVR Project with HC-05 bluetooth module

# توضیحات
در این پروژه من از میکروکنترلر ATMEGA8 استفاده کردم.

در این پروژه ما با استفاده از بلوتوث گوشی دستورات را به ماژول HC-05 میفرستیم و ماژول دستورات را به میکرو انتقال میدهد.

این کد با IDE CodeVisionAvr نوشته شده و با آن میتوان کامپایل کرد.

داخل فولدر ما یک فایل با نام 1.c داریم که به زبان سی نوشته شد است که فایل اصلی و کد پروژه ما است.

در کد ما در لاین یک تا چهار ما آمدیم و کتابخانه میکروکنترلر Atmega8 و کتابخانه stdio برای توابع printf که برای ارسال داده به ماژول از طریق پورت سریال و gets برای دریافت داده از ماژول از طریق پورت سریال میکرو و کتابخانه delay برای ایجاد وقفه در کد و کتابخانه string برای توابع strcmp و strncpy رو فراخوانی کرده ایم.

در خط های 16 و 18 پایه های 0 تا 7 پورت B را و پایه های 0 تا 5 پورت C را خروجی تعیین کرده ایم.

در خط های 17 و 19 مقدار اولیه بیت ها را مشخص کرده ایم.

و از خطوط 21 تا 25 TXD و RXD پورت سریال را با باود ریت 9600 تنظیم کرده ایم که باود ریت پیشفرض ماژول بلوتوث HC-05 همان 9600 است.

در خط 29 ما یک رشته با طول 20 از پورت سریال میگیریم و داخل متغیر y ذخیره میکنیم.

در خط 30 و 31 از رشته y به متغیر x به طول 12 کپی میکنیم , حالا شاید بپرسید چرا در همان x با gets(x , 12) انجام ندادیم به این دلیل که بعضی از برنامه های بلوتوث ترمینال ممکن است از لاین اندینگ CR یا LF یا CR-LF استفاده کند و در آخر هر دستور یک /n و یک /r بفرستند و به همین دلیل Unknown Command برگرده به موبایل.

در شرط ها هم ما با استفاده از تابع strcmp چک میکنیم که مثلا آیا x برابر Turn On Blue بود Blue رو روشن کن و Red و Green رو خاموش.

# Shematic
<img src="https://github.com/Reza-Skar/AVR_With_HC-05/blob/main/images/Shematic.png?raw=true"/>

 Contact-Us
برای ارتباط با بنده میتوانید از راه های ارتباطی زیر استفاده کنید :

Phone Number : +989228235272

Telegram : @Rezaskar

Whatsapp : +989228235272

E-Mail : rsababkar@gmail.com

تلگرام سریع تر پاسخ میدم.


# Special Thanks To :

<details> 
  <summary>P.Khalegi :</summary>
   Telegram : @Parisa_Khaleghi
</details>

DMF313.ir 👇

[<img src="https://dmf313.ir/wp-content/uploads/2020/05/AdminAvatar.png" width="100"/>](https://dmf313.ir/)



# Support-Us
آدرس های ولت جهت حمایت های شما ( هیچ انتظاری از هیچ کس و هیچ اجباری و اصراری برای هیچ کسی نداریم و اگر از پروژه خوشتون اومد و دوست داشتید حمایت کنید هر چقدر دوست داشتید واریز کنید و حتما تو تلگرام بهم خبر بدید تا من بدونم چه کسی واریز کرده )

USDT BEP20 : 0x0D9d976FB92C0045FA2f242Ab43e8842D8f117d8

USDT ERC20 : 0x0D9d976FB92C0045FA2f242Ab43e8842D8f117d8

USDT TRC20 : TKmT6nmCtEkGkgsjmXskTJtAdhDNpLkLHK

USDT SPL : 4pBH2WYwBtjyCbVyUge3ZzYWfne61cRb4ddYnENUiYLC
