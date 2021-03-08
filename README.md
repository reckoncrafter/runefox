# runefox ![](./icons/runefox-icon.png)

Simple extension for Firefox that converts all DOM text on screen to its closest equivalent in runes.

---
This extension is not intended to be published, and is **currently unsigned**.

If you, for some bizzare reason, wish to try out this extension, here are some simple installation instructions.

- Clone or download a zip of this repository
- Go to [about:debugging](about:debugging) in your Firefox browser
- Go to **"This Firefox"** and click **"Load Temporary Add-On"**
- Select the downloaded .zip file, or the [manifest.json](./manifest.json) file in the uncompressed folder

:warning: This extension is a toy, and because it processes all available text, is very slow, and can easily take up to 15 seconds to convert a website.

:heavy_plus_sign: The file [torunes.cpp](./torunes.cpp) is the original program I wrote that performs this operation on text from `stdin`. It's a simple script, so it just needs to be compiled with `g++`.
