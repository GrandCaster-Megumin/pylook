# 該地方用python 3.8.18 執行成功的 用python3.9有無法解決的錯誤訊息
import logging
from telegram import Update
from telegram.ext import ApplicationBuilder, ContextTypes, CommandHandler
from telegram.ext import filters, MessageHandler 
#在伺服器紀錄誰連過來狀態為何
logging.basicConfig(
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s',
    level=logging.INFO
)
#正常回傳訊息
async def start(update: Update, context: ContextTypes.DEFAULT_TYPE):
    await context.bot.send_message(chat_id=update.effective_chat.id, text="I'm a bot, please talk to me!")
# 遇到未設定訊息回傳訊息 範例為對方傳啥回傳啥
async def echo(update: Update, context: ContextTypes.DEFAULT_TYPE):
    await context.bot.send_message(chat_id=update.effective_chat.id, text=update.message.text)
# 引用對方訊息 範例為變成大寫 context.args為接收訊息空白分離 123 abc 存為 ['123','abc']  
# join為將list用空白合併 ['123','abc'] 存為123 abc
async def caps(update: Update, context: ContextTypes.DEFAULT_TYPE):
    text_caps = ' '.join(context.args).upper()
    await context.bot.send_message(chat_id=update.effective_chat.id, text=text_caps)

if __name__ == '__main__':
    # 取的要連接的機器人金鑰
    application = ApplicationBuilder().token('6489435757:AAHgMpb4c_4jdSUX66vwGXr7tnjFu8tIA78').build()
    # 未探索語法詳細內容
    echo_handler = MessageHandler(filters.TEXT & (~filters.COMMAND), echo)
    # 接收到/start 執行 async def start
    start_handler = CommandHandler('start', start)
    caps_handler = CommandHandler('caps', caps)
    # 將指令給伺服器激活
    application.add_handler(caps_handler)   
    application.add_handler(start_handler)
    application.add_handler(echo_handler)

    # 開啟伺服器
    application.run_polling()
    
