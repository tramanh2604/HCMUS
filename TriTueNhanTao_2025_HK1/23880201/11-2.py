#BT42: Format DateTime
from datetime import datetime
given_date = datetime(2020, 2, 25)
print("Given date is")
print(given_date.strftime('%A %d %B %Y'))
