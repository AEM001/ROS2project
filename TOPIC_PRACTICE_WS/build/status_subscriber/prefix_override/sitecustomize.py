import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/albert/practice/TOPIC_PRACTICE_WS/install/status_subscriber'
