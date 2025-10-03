# 🚀 Bot Setup Instructions

Welcome to the bot setup guide! Follow the steps below to install and configure the bot correctly. This guide is beginner-friendly and provides clear steps for all platforms.

---

## 📑 Table of Contents

1. [Installation Steps](#installation-steps)
2. [Configuration Files](#configuration-files)
3. [Running the Bot](#running-the-bot)
4. [Wrapper Scripts (Optional)](#wrapper-scripts-optional)
5. [Contact and Support](#contact-and-support)

---

<details>
<summary>🔹 Installation Steps</summary>

1. **Install Node.js (v18+) or Python 3.10+**

   - This bot runs with **Python**, make sure it's installed from [python.org](https://python.org/downloads/).
   - Check version:

     ```bash
     python --version
     ```

2. **Install required dependencies**
   From the bot folder, run:

   ```bash
   pip install -r requirements.txt
   ```

3. **Prepare configuration files**
   Make sure all files in the [Configuration Files](#configuration-files) section are set up properly.

</details>

---

<details>
<summary>🔹 Configuration Files</summary>

### 1. `configs.json` - Adjust Bot Settings

```json
{
  "skipInvalidProxy": false,
  "proxyRotationInterval": 2,
  "delayEachAccount": [1, 81],
  "timeToRestartAllAccounts": 300,
  "howManyAccountsRunInOneTime": 10,
  "doTasks": true,
  "retryOnLoginFail": 3
}
```

---

### 2. `datas.txt` - User Data

- Download from: [here](https://t.me/KeoAirDropFreeNee/1586)
- Format:

```
query_id.../user...
query_id.../user...
```

- Wallet generator: [GitHub Link](https://github.com/MeoMunDep/Automatic-Ultimate-Create-Wallets-for-Airdrop)

---

### 3. `proxies.txt` - Proxy List (Optional)

Supported formats per line:

```
http://user:pass@host:port
socks5://host:port
```

Leave blank if no proxy is used.

</details>

---

<details>
<summary>🔹 Running the Bot</summary>

Open a terminal in the folder where `meomundep.py` is located.

Run directly:

```bash
python meomundep.py
```

</details>

---

<details>
<summary>🔹 Wrapper Scripts (Optional)</summary>

**Windows (`run.bat`)**

```bat
@echo off
python meomundep.py
pause
```

**Linux/macOS (`run.sh`)**

```bash
#!/bin/bash
python3 meomundep.py
```

Make executable:

```bash
chmod +x run.sh
./run.sh
```

</details>

---

<details>
<summary>🔹 Contact and Support</summary>

- **Referral Link**: [Start Here](https://t.me/MidasRWA_bot/app?startapp=ref_618fb7aa-a884-4deb-b4fb-c462c278acfa)
- **Buy Telegram Account**: [Here](https://t.me/KeoAirDropFreeNe/312/27801) or [GitHub](https://github.com/MeoMunDep/MeoMunDep)
- **Contact me**: [Message Me](https://t.me/MeoMunDep)
- **Community Group**: [Join](https://t.me/KeoAirDropFreeNe)
- **Updates Channel**: [Follow](https://t.me/KeoAirDropFreeNee)

</details>
