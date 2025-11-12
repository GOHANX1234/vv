#include <android/log.h>
#include <unistd.h>
#include <thread>
#include <limits>
#include <KittyMemory/KittyMemory.h>
#include <KittyMemory/MemoryPatch.h>
#include <KittyMemory/KittyScanner.h>
#include <KittyMemory/KittyUtils.h>
//#include "oxorany/oxorany.h"
#include <xdl.h>
#include <KittyUtils.h>
#include <KittyMemory.h>
#include <Il2Cpp.h>
#include <SubstrateHook.h>
#include <CydiaSubstrate.h>
#include "ItsRohit_Op/gui.hpp"
#include "il2cpp.h"

//#include "fonts/FontAwesome6_solid.h"
#include "ItsRohitOp/Land.hpp"
//#include <ImguiPP.h>
#include "imgui/imgui.h"
#include "imgui/stb_image.h"
#include "mkop.h"
#include "ff.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include <Themes.h>
#include "ItsRohitOp/Firewall.h"
#include "ItsRohitOp/exptime.h"
#include "ItsRohitOp/Chams.h"
#include "ItsRohitOp/Land.h"
#include "ItsRohitOp/CN.h"
#include "ItsRohitOp/lundbda.h"
#include "ItsRohitOp/fontch.h"
#include "Icon/OPPOSans-H.h"
#include "Rohit/Icon.h"
#include "Rohit/Iconcpp.h"

static int TAB = 1;;

#include "𝗧𝗚-𝗪𝗜𝗗𝗚𝗘𝗧𝗦_𝗘𝗫𝗣𝗘𝗥𝗧/Colors.h"
#include "𝗧𝗚-𝗜𝗠𝗚𝗨𝗜_𝗚𝗢𝗗/Color.h"
#include "𝗧𝗚-𝗜𝗠𝗚𝗨𝗜_𝗚𝗢𝗗/WIDGETS_EXPERT.h"
#include "𝗧𝗚-𝗜𝗠𝗚𝗨𝗜_𝗚𝗢𝗗/FONTS/𝗜𝗠𝗚𝗨𝗜_𝗚𝗢𝗗.h"
#include "𝗧𝗚-𝗜𝗠𝗚𝗨𝗜_𝗚𝗢𝗗/FONTS/New.h"
//#include "𝗧𝗚-𝗜𝗠𝗚𝗨𝗜_𝗚𝗢𝗗/Oxorany/oxorany.h"

bool active = false;
bool down;
bool upp;

ImFont* F48 = nullptr;
ImFont* F50 = nullptr;
ImFont* JAAT = nullptr;
float menu[4] = { 0/255.f, 255/255.f, 0/255.f, 1.000f };

ImVec4 g_MenuAccentColor = ImVec4(0.0f, 1.0f, 0.0f, 1.0f);

struct LoginState {
    bool isAuthenticated;
    char key[128];
    std::string error;
    bool isSubmitting;
    bool updateModalShown;
    
    LoginState() : isAuthenticated(false), isSubmitting(false), updateModalShown(false) {
        key[0] = '\0';
    }
} loginState;

//static int TAB = 1;


#include <fstream>
#define getRealGGPOffset(offset) getAbsoluteAddress("libGPP.so",offset)
#define PATCH_LIB(lib, addr, bytes) PatchOffset(lib, addr, bytes)

#include <android/log.h>
#include <string>

void PatchOffset(const char* lib, const char* addr, const char* bytes) {
   
    __android_log_print(ANDROID_LOG_INFO, "PatchOffset",
                        "Patch called for %s at %s with %s",
                        lib, addr, bytes);

   
}


#include "GHr_Ryuuka/Tools/Call_Tools.h"
using json = nlohmann::json;
time_t rng = 0;
std::string g_Token, g_Auth;
#include "ItSRohitOpLogin.h"

struct My_Patches {
    MemoryPatch Bypass1;
    MemoryPatch Bypass2;
    MemoryPatch Bypass3;
    MemoryPatch Bypass4;
    MemoryPatch Bypass5;
    MemoryPatch Bypass6;
    MemoryPatch Bypass7;
    MemoryPatch Bypass8;
    MemoryPatch Bypass9;
    MemoryPatch Bypass10;
    MemoryPatch Bypass11;
    MemoryPatch Bypass12;
    MemoryPatch Bypass13;
    MemoryPatch Bypass14;
    MemoryPatch Bypass15;
    
    MemoryPatch Guest;
} hexPatches;
using zygisk::Api;
using zygisk::AppSpecializeArgs;
using zygisk::ServerSpecializeArgs;

#define ALPHA    ( ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_Float | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoBorder )
#define NO_ALPHA ( ImGuiColorEditFlags_NoTooltip    | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_Float | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoBorder )

void HueText(const char* text, ImVec4 color)
{
    static auto start_time = std::chrono::high_resolution_clock::now();
    auto elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start_time).count() / 1000.0f; 
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 0.0f)); 
    for (int i = 0; i < strlen(text); i++)
    {
      ImGui::SameLine();
        float t = fmodf(elapsed_seconds + (float)i / (float)strlen(text), 0.65f); 
        ImVec4 currentColor = ImVec4(color.x * t, color.y * t, color.z * t, color.w); 
        ImGui::PushStyleColor(ImGuiCol_Text, currentColor); 
        ImGui::Text("%c", text[i]); 
        ImGui::PopStyleColor(); 
    }
    ImGui::PopStyleColor(); 
}
/*
*/
void hack();
void writeLog(const std::string& logMessage, const std::string& filename = "/storage/emulated/0/Android/data/com.dualspace.multispace.androidx/files/log.txt");



class MyModule : public zygisk::ModuleBase {
 public:
  void onLoad(Api *api, JNIEnv *env) override {
    this->api_ = api;
    this->env_ = env;
    Tools::genv = env;
   // gEnv = env;

  }

  void preAppSpecialize(AppSpecializeArgs *args) override {
    static constexpr const char *packages[] = {
        "com.dts.freefireth"
    };
    const char *process = env_->GetStringUTFChars(args->nice_name, nullptr);
    for (const auto *package: packages) {
      is_game_ = (strcmp(process, package) == 0);
      if (is_game_) {
        break;
      }
    }
    env_->ReleaseStringUTFChars(args->nice_name, process);
  }

  void postAppSpecialize(const AppSpecializeArgs *args) override {
    if (is_game_) {
       Tools::genv->GetJavaVM(&Tools::jvm);
     //  genv->GetJavaVM(&gJvm);
      std::thread{hack}.detach();
    }
  }

 private:
  Api *api_ = nullptr;
  JNIEnv *env_ = nullptr;
  bool is_game_ = false;
};


uintptr_t il2cpp_base = 0;
void *getRealAddr(ulong offset) {
    return reinterpret_cast<void*>(il2cpp_base + offset);
};

struct TextureInfo { ImTextureID textureId; int x; int y; int w; int h; };

void DrawImage(int x, int y, int w, int h, ImTextureID Texture) {
ImGui::GetForegroundDrawList()->AddImage(Texture, ImVec2(x, y), ImVec2(x + w, y + h));}


static TextureInfo textureInfo;
TextureInfo createTexture(char *ImagePath) {
int w, h, n;
stbi_uc *data = stbi_load(ImagePath, &w, &h, &n, 0);
GLuint texture;
glGenTextures(1, &texture);
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
if (n == 3) {
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
} else {
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
}stbi_image_free(data);
textureInfo.textureId = reinterpret_cast<ImTextureID>((GLuint *) texture);
textureInfo.w = w;
textureInfo.h = h;
return textureInfo;
}TextureInfo CreateTexture(const unsigned char* buf, int len) {
TextureInfo image;
unsigned char* image_data = stbi_load_from_memory(buf, len, &image.w, &image.h, NULL, 0);
if (image_data == NULL) perror("文件不存在"); GLuint image_texture;
glGenTextures(1, &image_texture);
glBindTexture(GL_TEXTURE_2D, image_texture);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); //对于非二次方纹理，这在 WebGL 上是必需的
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); //相同的
#if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
#endif
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image.w, image.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
stbi_image_free(image_data);
image.textureId = (ImTextureID)image_texture;
return image;
}

//LOGO
TextureInfo mkop;
extern TextureInfo mkop;

TextureInfo ff;
extern TextureInfo ff;



void InitTexture() {
mkop = CreateTexture(mkop_data, sizeof(mkop_data));
ff = CreateTexture(ff_data, sizeof(ff_data));
}
namespace Settings
{
static int Tab = 1;
}

#define ICON_FA_GUN "\xee\x81\xb2"        // Gun icon (Font Awesome 6 me available)
#define ICON_FA_CROSSHAIRS "\xef\x81\x9b" // Crosshair (sniper/aim ke liye best)
#define ICON_FA_EYE "\xef\x81\xae"        // Eye icon for ESP
#define ICON_FA_ID_CARD "\xef\x8b\x82"    // ID Card icon for INFO
#define ICON_FA_ELLIPSIS "\xef\x85\x81"   // Ellipsis icon for MORE
#define ICON_FA_ARROW_RIGHT "\xef\x81\xa1" // Arrow pointing right for collapsed
#define ICON_FA_ARROW_LEFT "\xef\x81\xa0"  // Arrow pointing left for expanded

#define ICON_FA_WINDOW_MINIMIZE "\xef\x8a\x96"

void SetupImgui() {
IMGUI_CHECKVERSION();
InitTexture();
ImGui::CreateContext();
ImGui_ImplOpenGL3_Init("#version 300 es");
ImGuiIO& io = ImGui::GetIO();

//ImGuiIO &io = ImGui::GetIO();
            
            
//ImGuiIO &io = ImGui::GetIO();

ImGui::GetStyle().WindowPadding = ImVec2(8, 8);
ImGui::GetStyle().FramePadding = ImVec2(10, 10);
ImGui::GetStyle().ItemSpacing = ImVec2(10, 10);
ImGui::GetStyle().FrameBorderSize = 0.0f;
ImGui::GetStyle().WindowBorderSize = 0.0f;
ImGui::GetStyle().TabBorderSize = 0.0f;
ImGui::GetStyle().ScrollbarSize = 20.0f;

// Setup Platform/Renderer backends
ImGuiStyle& style = ImGui::GetStyle();
ImVec4* colors = style.Colors;

// Rounding
style.WindowRounding = 8.0f;
style.FrameRounding = 4.0f;
style.GrabRounding = 4.0f;
style.PopupRounding = 4.0f;
style.TabRounding = 4.0f;
style.ScrollbarRounding = 4.0f;

// Replace blue with pure orange (RGB(255, 165, 0) -> ImVec4(1.0f, 0.647f, 0.0f, 1.0f))
ImVec4 pureOrange = ImVec4(1.0f, 0.647f, 0.0f, 1.0f); 

// Update colors
colors[ImGuiCol_ChildBg] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
colors[ImGuiCol_Border] = ImColor(255, 255, 255, 200);  // White border color
colors[ImGuiCol_Tab] = pureOrange;
colors[ImGuiCol_TabHovered] = ImVec4(1.0f, 0.647f, 0.0f, 0.8f);  // Hover state of Tab
colors[ImGuiCol_TabActive] = pureOrange;
colors[ImGuiCol_TabUnfocused] = ImVec4(0.20f, 0.20f, 0.20f, 0.40f);
colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.20f, 0.20f, 0.20f, 0.40f);

colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.20f, 0.20f, 0.54f);
colors[ImGuiCol_FrameBgHovered] = ImVec4(0.30f, 0.30f, 0.30f, 0.78f);
colors[ImGuiCol_FrameBgActive] = ImVec4(0.40f, 0.40f, 0.40f, 0.67f);

// Title Backgrounds, Buttons, and Sliders
colors[ImGuiCol_TitleBgActive] = pureOrange;  // Active title background color
colors[ImGuiCol_CheckMark] = ImVec4(0.0f, 1.0f, 0.0f, 1.0f); // Green checkmark
colors[ImGuiCol_SliderGrab] = pureOrange;
colors[ImGuiCol_SliderGrabActive] = pureOrange;
colors[ImGuiCol_Button] = ImVec4(1.0f, 0.647f, 0.0f, 0.8f);  // Button with slight transparency
colors[ImGuiCol_ButtonHovered] = ImVec4(1.0f, 0.647f, 0.0f, 1.0f);  // Hovered button (full opacity)
colors[ImGuiCol_ButtonActive] = ImVec4(1.0f, 0.647f, 0.0f, 0.9f);  // Active button (slightly transparent)

colors[ImGuiCol_Header] = ImVec4(0.82f, 0.13f, 0.19f, 0.31f);  // This one stays as it is
colors[ImGuiCol_HeaderHovered] = ImVec4(0.82f, 0.13f, 0.19f, 0.80f);  // Hover state of Header
colors[ImGuiCol_HeaderActive] = pureOrange;  // Active header in orange
colors[ImGuiCol_Separator] = ImColor(200, 200, 200, 200);  // Separator color stays as it is

// Text Color
colors[ImGuiCol_Text] = ImVec4(0.95f, 0.95f, 0.95f, 1.00f);


            io.ConfigWindowsMoveFromTitleBarOnly = true;
            io.IniFilename = NULL;

            static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
            ImFontConfig icons_config;

            ImFontConfig CustomFont;
            CustomFont.FontDataOwnedByAtlas = false;

            icons_config.MergeMode = true;
            icons_config.PixelSnapH = true;
            icons_config.OversampleH = 2.5;
            icons_config.OversampleV = 2.5;
            
          //io.Fonts->AddFontFromMemoryTTF((void *)BaiduZY_data, BaiduZY_size, 30.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
          io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(itsmkop), sizeof(itsmkop), 30.f, &CustomFont);
                  io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 30.0f, &icons_config, icons_ranges);
                  io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 24.f, &CustomFont);
         // memset(&Config, 0, sizeof(sConfig));
//

//ImFontConfig CustomFont;
CustomFont.FontDataOwnedByAtlas = false;
//font_cfg.SizePixels = 22.0f;
static const ImWchar vietnamese_chars[] = {
0x0020, 0x00FF, // Basic Latin + Latin Supplement
0x0102, 0x0103, // Â, â
0x0110, 0x0111, // Đ, đ
0x0128, 0x0129, // Ĩ, ĩ
0x0168, 0x0169, // Ũ, ũ
0x01A0, 0x01A1, // Ơ, ơ
0x01AF, 0x01B0, // Ư, ư
0x1EA0, 0x1EF9, // Vietnamese specific characters
0 // null-terminated list
};
}


bool clearMousePos = true;
bool ImGuiOK = false;
bool initImGui = false;

void VerticalTab(const char* icon, const char* text, int tab_index, int* p_selected_tab, float buttonWidth, bool isExpanded) {
    const float collapsedWidth = 70.0f;
    const float buttonHeight = 60.0f;
    
    ImGuiStyle& style = ImGui::GetStyle();
    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    ImVec2 pos = ImGui::GetCursorScreenPos();
    
    // Invisible button for hit detection
    ImGui::PushID(tab_index);
    bool clicked = ImGui::InvisibleButton("##tab", ImVec2(buttonWidth, buttonHeight));
    bool isHovered = ImGui::IsItemHovered();
    bool isSelected = (*p_selected_tab == tab_index);
    ImGui::PopID();
    
    if (clicked) {
        *p_selected_tab = tab_index;
    }
    
    // Dynamic colors based on g_MenuAccentColor
    ImVec4 accentColor = g_MenuAccentColor;
    ImVec4 accentHover = ImVec4(
        fminf(accentColor.x + 0.1f, 1.0f),
        fminf(accentColor.y + 0.1f, 1.0f),
        fminf(accentColor.z + 0.1f, 1.0f),
        1.0f
    );
    ImVec4 accentSelected = ImVec4(
        fmaxf(accentColor.x - 0.1f, 0.0f),
        fmaxf(accentColor.y - 0.1f, 0.0f),
        fmaxf(accentColor.z - 0.1f, 0.0f),
        1.0f
    );
    ImVec4 blackColor = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
    
    // Choose background color based on state
    ImVec4 bgColorVec = isSelected ? accentSelected : (isHovered ? accentHover : accentColor);
    ImU32 bgColor = ImGui::ColorConvertFloat4ToU32(bgColorVec);
    
    // Draw button background
    draw_list->AddRectFilled(pos, ImVec2(pos.x + buttonWidth, pos.y + buttonHeight), bgColor, style.FrameRounding);
    
    // Calculate icon position - always centered in the collapsed width area
    ImFont* font = ImGui::GetFont();
    ImVec2 iconSize = font->CalcTextSizeA(font->FontSize, FLT_MAX, 0.0f, icon);
    
    // Icon is always centered at collapsedWidth / 2
    float iconX = pos.x + (collapsedWidth - iconSize.x) * 0.5f;
    float iconY = pos.y + (buttonHeight - iconSize.y) * 0.5f;
    
    // Draw icon at fixed centered position
    ImU32 textColor = ImGui::ColorConvertFloat4ToU32(blackColor);
    draw_list->AddText(ImVec2(iconX, iconY), textColor, icon);
    
    // Draw text after the icon if expanded
    if (isExpanded && text != nullptr) {
        ImVec2 textSize = font->CalcTextSizeA(font->FontSize, FLT_MAX, 0.0f, text);
        float textX = pos.x + collapsedWidth + 5.0f; // 5px padding after icon area
        float textY = pos.y + (buttonHeight - textSize.y) * 0.5f;
        draw_list->AddText(ImVec2(textX, textY), textColor, text);
    }
}

static int selected_tab = 0;

// Expand/Collapse state variables
static bool isTabsExpanded = false; // Default: collapsed
static float currentTabWidth = 70.0f; // Start with collapsed width
static float targetTabWidth = 70.0f; // Target width for smooth animation

inline EGLBoolean (*old_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
inline EGLBoolean hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    
        eglQuerySurface(dpy, surface, EGL_WIDTH, &g_GlWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &g_GlHeight);
    
    


    if (!g_IsSetup) {
        prevWidth = g_GlWidth;
        prevHeight = g_GlHeight;
        SetupImgui();
        
        g_IsSetup = true;
    }
    
 // Window background = black

    ImGuiIO &io = ImGui::GetIO();
        //Darkness();
        // Thiết lập màu chủ đề
        //ImVec4* colors = ImGui::GetStyle().Colors;


    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(g_GlWidth, g_GlHeight);
    ImGui::NewFrame();
    
    ImVec4 accentPrimary = g_MenuAccentColor;
    ImVec4 accentHover = ImVec4(
        fminf(accentPrimary.x + 0.1f, 1.0f),
        fminf(accentPrimary.y + 0.1f, 1.0f),
        fminf(accentPrimary.z + 0.1f, 1.0f),
        1.0f
    );
    ImVec4 accentActive = ImVec4(
        fmaxf(accentPrimary.x - 0.1f, 0.0f),
        fmaxf(accentPrimary.y - 0.1f, 0.0f),
        fmaxf(accentPrimary.z - 0.0f, 0.0f),
        1.0f
    );
    ImVec4 accentTransparent = ImVec4(accentPrimary.x, accentPrimary.y, accentPrimary.z, 0.8f);
    
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_CheckMark] = accentPrimary;
    colors[ImGuiCol_Tab] = accentPrimary;
    colors[ImGuiCol_TabHovered] = accentHover;
    colors[ImGuiCol_TabActive] = accentPrimary;
    colors[ImGuiCol_Button] = accentTransparent;
    colors[ImGuiCol_ButtonHovered] = accentPrimary;
    colors[ImGuiCol_ButtonActive] = accentActive;
    colors[ImGuiCol_SliderGrab] = accentPrimary;
    colors[ImGuiCol_SliderGrabActive] = accentPrimary;
    colors[ImGuiCol_Header] = accentTransparent;
    colors[ImGuiCol_HeaderHovered] = accentHover;
    colors[ImGuiCol_HeaderActive] = accentPrimary;
    
        if (ImGuiOK) {
            int touchCount = (((int (*)())(Class_Input__get_touchCount))());
    if (touchCount > 0) {
        UnityEngine_Touch_Fields touch = ((UnityEngine_Touch_Fields(*)(int))(Class_Input__GetTouch))(0);
        float reverseY = io.DisplaySize.y - touch.m_Position.fields.y;
        switch (touch.m_Phase) {
            case TouchPhase::Began:
            case TouchPhase::Stationary:
                io.MousePos = ImVec2(touch.m_Position.fields.x, reverseY);
                io.MouseDown[0] = true;
                break;
            case TouchPhase::Ended:
            case TouchPhase::Canceled:
                io.MouseDown[0] = false;
                clearMousePos = true;
                break;
            case TouchPhase::Moved:
                io.MousePos = ImVec2(touch.m_Position.fields.x, reverseY);
                break;
            default:
                break;
        }
    }
        }
        
        UpdateSpeedhack();
        DrawESP(g_GlWidth, g_GlHeight);
    
    static bool itsmk = true;
static bool clickInProgress = false;
static float clickStartTime = 0;
if (itsmk == false) {
if (ImGui::Begin((" MKOP" ), 0,ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground)) {
const auto& pWindowDrawList = ImGui::GetWindowDrawList();
const auto& p = ImGui::GetWindowPos();
ImGui::SetCursorPos(ImVec2(5, 5));
ImVec2 imageSize(80,80);
ImGui::Image(mkop.textureId, imageSize);
if (ImGui::IsItemHovered()) {
if (ImGui::IsMouseClicked(ImGuiMouseButton_Left)) {clickInProgress = true;
clickStartTime = ImGui::GetTime();}}
if (clickInProgress && ImGui::IsMouseReleased(ImGuiMouseButton_Left)) {clickInProgress = false;
float currentTime = ImGui::GetTime();
float clickDuration = currentTime - clickStartTime;
if (clickDuration < 0.2f) {itsmk = true;
}}}}

ImGui::End();

if (!loginState.isAuthenticated) {
    // Show centered login modal
    ImGuiIO& io = ImGui::GetIO();
    ImVec2 center = ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f);
    
    ImGui::SetNextWindowSize(ImVec2(440, 280), ImGuiCond_Always);
    ImGui::SetNextWindowPos(center, ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    
    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 10.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(20, 20));
    
    if (ImGui::Begin("##LoginModal", nullptr, 
        ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | 
        ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoSavedSettings | 
        ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar)) {
        
        float windowWidth = ImGui::GetWindowWidth();
        
        // Title with icon
        ImGui::PushStyleColor(ImGuiCol_Text, g_MenuAccentColor);
        ImVec2 titleSize = ImGui::CalcTextSize(ICON_FA_LOCK " Login Required!!");
        ImGui::SetCursorPosX((windowWidth - titleSize.x) * 0.5f);
        ImGui::Text(ICON_FA_LOCK " Login Required!!");
        ImGui::PopStyleColor();
        
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        
        // Key input box
        ImGui::Text(ICON_FA_KEY " Key:");
        ImGui::PushItemWidth(-1);
        ImGui::InputTextWithHint("##KeyInput", "Enter your activation key", 
            loginState.key, IM_ARRAYSIZE(loginState.key));
        ImGui::PopItemWidth();
        
        ImGui::Spacing();
        
        // Buttons row
        float buttonWidth = (windowWidth - 60) / 2.0f;
        float buttonHeight = 40.0f;
        
        // Push style for better text centering
        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 8));
        
        // Paste button
        if (ImGui::Button(ICON_FA_CLIPBOARD " Paste", ImVec2(buttonWidth, buttonHeight))) {
            std::string clipText = Tools::getClipboard();
            if (!clipText.empty()) {
                auto l = clipText.find_first_not_of(" \r\n\t");
                auto r = clipText.find_last_not_of(" \r\n\t");
                std::string trimmed = (l == std::string::npos) ? std::string() : clipText.substr(l, r - l + 1);
                
                if (!trimmed.empty()) {
                    strncpy(loginState.key, trimmed.c_str(), sizeof(loginState.key) - 1);
                    loginState.key[sizeof(loginState.key) - 1] = '\0';
                    loginState.error.clear();
                }
            }
        }
        
        ImGui::SameLine();
        
        // Login button
        bool canLogin = strlen(loginState.key) > 0 && !loginState.isSubmitting;
        if (!canLogin) {
            ImGui::PushStyleVar(ImGuiStyleVar_Alpha, 0.5f);
        }
        
        if (ImGui::Button(ICON_FA_SIGN_IN " Login", ImVec2(buttonWidth, buttonHeight)) && canLogin) {
            loginState.isSubmitting = true;
            std::string result = Tools::Login(loginState.key);
            loginState.isSubmitting = false;
            
            if (result == "OK") {
                loginState.isAuthenticated = true;
                loginState.error.clear();
            } else {
                loginState.error = result.empty() ? "Invalid key" : result;
            }
        }
        
        if (!canLogin) {
            ImGui::PopStyleVar();
        }
        
        // Pop frame padding style
        ImGui::PopStyleVar();
        
        // Show error message if any
        if (!loginState.error.empty()) {
            ImGui::Spacing();
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 0.2f, 0.2f, 1.0f));
            ImGui::TextWrapped("%s", loginState.error.c_str());
            ImGui::PopStyleColor();
        }
    }
    
    ImGui::End();
    ImGui::PopStyleVar(2);
} else if (bHasUpdate && !loginState.updateModalShown && !Tools::g_Updates.empty()) {
    // 🎨 BEAUTIFUL UPDATE PAGE - NEW DESIGN 🎨
    ImGuiIO& io = ImGui::GetIO();
    ImVec2 center = ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f);
    
    ImGui::SetNextWindowSize(ImVec2(520, 420), ImGuiCond_Always);
    ImGui::SetNextWindowPos(center, ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    
    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 12.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(25, 25));
    ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 2.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 1.0f, 0.0f, 0.8f));
    
    if (ImGui::Begin("##UpdateModal", nullptr, 
        ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | 
        ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoSavedSettings | 
        ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar)) {
        
        float windowWidth = ImGui::GetWindowWidth() - 50;
        static float pulseAnimation = 0.0f;
        pulseAnimation += ImGui::GetIO().DeltaTime * 2.0f;
        
        for (size_t i = 0; i < Tools::g_Updates.size(); i++) {
            auto& update = Tools::g_Updates[i];
            
            // 🎯 Animated Header with Glow Effect
            ImDrawList* draw = ImGui::GetWindowDrawList();
            ImVec2 headerStart = ImGui::GetCursorScreenPos();
            
            float glowIntensity = 0.7f + 0.3f * sinf(pulseAnimation);
            ImU32 glowColor = IM_COL32(0, (int)(255 * glowIntensity), 0, 100);
            
            // Glow background
            draw->AddRectFilled(
                ImVec2(headerStart.x - 10, headerStart.y - 10),
                ImVec2(headerStart.x + windowWidth + 10, headerStart.y + 60),
                glowColor,
                8.0f
            );
            
            // Main header background
            draw->AddRectFilled(
                headerStart,
                ImVec2(headerStart.x + windowWidth, headerStart.y + 50),
                IM_COL32(0, 200, 0, 255),
                8.0f
            );
            
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            
            // Update icon and title
            ImGui::PushFont(F48 ? F48 : ImGui::GetFont());
            std::string titleText = ICON_FA_ROCKET " " + update.title;
            ImVec2 titleSize = ImGui::CalcTextSize(titleText.c_str());
            ImGui::SetCursorPosX((ImGui::GetWindowWidth() - titleSize.x) * 0.5f);
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 0.0f, 0.0f, 1.0f));
            ImGui::Text("%s", titleText.c_str());
            ImGui::PopStyleColor();
            ImGui::PopFont();
            
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 40);
            ImGui::Spacing();
            ImGui::Spacing();
            
            // 📝 Message Section with styled background
            ImGui::PushStyleColor(ImGuiCol_ChildBg, ImVec4(0.1f, 0.1f, 0.1f, 0.9f));
            ImGui::BeginChild("##UpdateMessage", ImVec2(windowWidth, 140), true, ImGuiWindowFlags_NoScrollbar);
            
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));
            ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + windowWidth - 30);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);
            ImGui::TextWrapped("%s", update.message.c_str());
            ImGui::PopTextWrapPos();
            ImGui::PopStyleColor();
            
            ImGui::EndChild();
            ImGui::PopStyleColor();
            
            ImGui::Spacing();
            ImGui::Spacing();
            
            // 🎮 Action Buttons with Gradient Effect
            float buttonHeight = 55.0f;
            
            // Download button with pulsing effect
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 8.0f);
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.0f, 0.8f, 0.0f, 1.0f));
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.0f, 0.6f, 0.0f, 1.0f));
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 0.0f, 0.0f, 1.0f));
            
            std::string downloadBtnText = ICON_FA_DOWNLOAD "  " + update.buttonText + "  " + ICON_FA_DOWNLOAD;
            
            if (ImGui::Button(downloadBtnText.c_str(), ImVec2(windowWidth, buttonHeight))) {
                Tools::OpenURL(update.linkUrl.c_str());
            }
            
            ImGui::PopStyleColor(4);
            ImGui::PopStyleVar();
            
            ImGui::Spacing();
            
            // Later button
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 8.0f);
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.2f, 0.2f, 0.2f, 0.8f));
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.3f, 0.3f, 0.3f, 1.0f));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.1f, 0.1f, 0.1f, 1.0f));
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));
            
            if (ImGui::Button(ICON_FA_CLOCK " Continue Without Updating", ImVec2(windowWidth, 40))) {
                loginState.updateModalShown = true;
            }
            
            ImGui::PopStyleColor(4);
            ImGui::PopStyleVar();
        }
    }
    
    ImGui::End();
    ImGui::PopStyleColor();
    ImGui::PopStyleVar(3);
} else {

if (itsmk){
ImGui::SetNextWindowSize(ImVec2(685, 400), ImGuiCond_Once);
    if (ImGui::Begin(" ~ Wave Mods", 0, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar)) {



std::string title = "DEXXTER MOD APK V1";

    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    ImVec2 window_pos = ImGui::GetWindowPos();
    float window_width = ImGui::GetWindowWidth();
    float title_bar_height = 45.0f;
    float vertical_offset = 6.0f;

    // Pure black background for header section
    draw_list->AddRectFilled(
        window_pos,
        ImVec2(window_pos.x + window_width, window_pos.y + title_bar_height),
        IM_COL32(0, 0, 0, 255) 
    );

    float circle_radius = 15.0f;
    float circle_y_pos = window_pos.y + (title_bar_height / 2.0f) + vertical_offset;
    float initial_x_offset = 25.0f;
    float circle_spacing = 35.0f;

    // Get mouse position and check if the window is being hovered.
    ImVec2 mouse_pos = ImGui::GetMousePos();
    bool is_hovering = ImGui::IsWindowHovered();
    bool is_left_clicked = ImGui::IsMouseClicked(0);

    // Purple/Magenta circle
    ImVec2 red_circle_center = ImVec2(window_pos.x + initial_x_offset, circle_y_pos);
    draw_list->AddCircleFilled(red_circle_center, circle_radius, IM_COL32(200, 50, 200, 255));
    if (is_hovering && is_left_clicked && ImVec2(mouse_pos.x - red_circle_center.x, mouse_pos.y - red_circle_center.y).x * (mouse_pos.x - red_circle_center.x) + (mouse_pos.y - red_circle_center.y) * (mouse_pos.y - red_circle_center.y) < circle_radius * circle_radius) {
        itsmk = false;
    }

    // Red circle
    ImVec2 yellow_circle_center = ImVec2(window_pos.x + initial_x_offset + circle_spacing, circle_y_pos);
    draw_list->AddCircleFilled(yellow_circle_center, circle_radius, IM_COL32(255, 95, 86, 255));
    if (is_hovering && is_left_clicked && ImVec2(mouse_pos.x - yellow_circle_center.x, mouse_pos.y - yellow_circle_center.y).x * (mouse_pos.x - yellow_circle_center.x) + (mouse_pos.y - yellow_circle_center.y) * (mouse_pos.y - yellow_circle_center.y) < circle_radius * circle_radius) {
        itsmk = false;
    }

    // Green circle
    ImVec2 green_circle_center = ImVec2(window_pos.x + initial_x_offset + circle_spacing * 2, circle_y_pos);
    draw_list->AddCircleFilled(green_circle_center, circle_radius, IM_COL32(40, 204, 64, 255));
    if (is_hovering && is_left_clicked && ImVec2(mouse_pos.x - green_circle_center.x, mouse_pos.y - green_circle_center.y).x * (mouse_pos.x - green_circle_center.x) + (mouse_pos.y - green_circle_center.y) * (mouse_pos.y - green_circle_center.y) < circle_radius * circle_radius) {
        itsmk = false;
    }

    ImVec2 text_size = ImGui::CalcTextSize(title.c_str());
    float text_x = window_pos.x + (window_width - text_size.x) / 2.0f;
    float text_y = window_pos.y + (title_bar_height - text_size.y) / 2.0f + vertical_offset;

    draw_list->AddText(ImVec2(text_x, text_y), IM_COL32(255, 255, 255, 255), title.c_str());

    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + title_bar_height);
    
// Smooth animation for width transition
float deltaTime = ImGui::GetIO().DeltaTime;
float animSpeed = 8.0f; // Animation speed
float lerpFactor = 1.0f - powf(0.001f, deltaTime * animSpeed); // Smooth exponential lerp
currentTabWidth = currentTabWidth + (targetTabWidth - currentTabWidth) * lerpFactor;

// Snap to target if very close (avoid float oscillation)
if (fabsf(currentTabWidth - targetTabWidth) < 0.5f) {
    currentTabWidth = targetTabWidth;
}

ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(8.0f, 8.0f));
// Remove border and use animated width for tabs section
ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 0.0f);
ImGui::BeginChild("LeftTabs", ImVec2(currentTabWidth + 20, 0), false);
{
// Add vertical tabs with small spacing between them
ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(ImGui::GetStyle().ItemSpacing.x, 4.0f));

// Vertical tabs with icons centered and text appearing when expanded
VerticalTab(ICON_FA_CROSSHAIRS, "AIM", 0, &selected_tab, currentTabWidth, isTabsExpanded);
VerticalTab(ICON_FA_EYE, "ESP", 1, &selected_tab, currentTabWidth, isTabsExpanded);
VerticalTab(ICON_FA_ELLIPSIS, "MORE", 2, &selected_tab, currentTabWidth, isTabsExpanded);
VerticalTab(ICON_FA_ID_CARD, "INFO", 3, &selected_tab, currentTabWidth, isTabsExpanded);

// MOVED: Toggle button at the end (last position) - using same custom rendering
const char* toggleIcon = isTabsExpanded ? ICON_FA_ARROW_LEFT : ICON_FA_ARROW_RIGHT;
const char* toggleText = isTabsExpanded ? "Close" : nullptr;

ImGui::PushID(999);
ImVec2 togglePos = ImGui::GetCursorScreenPos();
bool toggleClicked = ImGui::InvisibleButton("##toggle", ImVec2(currentTabWidth, 60));
ImGui::PopID();

if (toggleClicked) {
    isTabsExpanded = !isTabsExpanded;
    targetTabWidth = isTabsExpanded ? 140.0f : 70.0f;
}

// Draw toggle button background with dynamic color
ImDrawList* toggleDrawList = ImGui::GetWindowDrawList();
ImVec4 blackColor = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
ImU32 toggleBgColor = ImGui::ColorConvertFloat4ToU32(g_MenuAccentColor);
toggleDrawList->AddRectFilled(togglePos, ImVec2(togglePos.x + currentTabWidth, togglePos.y + 60), toggleBgColor, ImGui::GetStyle().FrameRounding);

// Draw toggle icon centered
ImFont* toggleFont = ImGui::GetFont();
ImVec2 toggleIconSize = toggleFont->CalcTextSizeA(toggleFont->FontSize, FLT_MAX, 0.0f, toggleIcon);
float toggleIconX = togglePos.x + (70.0f - toggleIconSize.x) * 0.5f;
float toggleIconY = togglePos.y + (60 - toggleIconSize.y) * 0.5f;
ImU32 toggleTextColor = ImGui::ColorConvertFloat4ToU32(blackColor);
toggleDrawList->AddText(ImVec2(toggleIconX, toggleIconY), toggleTextColor, toggleIcon);

// Draw toggle text if expanded
if (toggleText != nullptr) {
    ImVec2 toggleTextSize = toggleFont->CalcTextSizeA(toggleFont->FontSize, FLT_MAX, 0.0f, toggleText);
    float toggleTextX = togglePos.x + 70.0f + 5.0f;
    float toggleTextY = togglePos.y + (60 - toggleTextSize.y) * 0.5f;
    toggleDrawList->AddText(ImVec2(toggleTextX, toggleTextY), toggleTextColor, toggleText);
}

ImGui::PopStyleVar(1);
}
ImGui::EndChild();
ImGui::PopStyleVar(2); // Pop both WindowPadding and ChildBorderSize
ImGui::SameLine();

// Remove window padding for perfect alignment
ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
ImGui::BeginChild("mainchild", ImVec2(0, 0), false);

{

switch (selected_tab) {
ImGui::Text("Safe Settings Content");
break;
case 0: // AIM
{
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 0.0f, 0.0f, 1.0f));
    ImGui::Button(" AIM ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0));
    ImGui::PopStyleColor(1);
    ImGui::PopStyleVar();
    ImGui::Separator();
    ImGui::Spacing();
    ImGui::Checkbox("ENABLE AIMKILL ", &Config.Aimbot.aimkill);
    ImGui::Spacing();

    ImGui::Spacing();

    break;
}
case 1: // ESPS
{
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 0.0f, 0.0f, 1.0f));
    ImGui::Button(" ESP ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0));
    ImGui::PopStyleColor(1);
    ImGui::PopStyleVar();
    ImGui::Separator();
    ImGui::Spacing();

    // Calculate layout dimensions
    float colorBoxSize = 30.0f;
    float leftColumnWidth = 224.0f;

    // LEFT COLUMN
    ImGui::BeginGroup();
    {
        // ENABLE ESP
        ImGui::Checkbox("ENABLE ESP", &Enable);
        ImGui::SameLine();
        ImGui::Dummy(ImVec2(colorBoxSize, 0));
        
        // DRAW LINE
        ImGui::Checkbox("DRAW LINE", &Config.ESP.Line);
        ImGui::SameLine();
        ImGui::PushItemWidth(colorBoxSize);
        ImGui::ColorEdit3("##LineColor", (float*)&Config.ESP.LineColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
        ImGui::PopItemWidth();
        
        // DRAW BOX
        ImGui::Checkbox("DRAW BOX", &Config.ESP.Box);
        ImGui::SameLine();
        ImGui::PushItemWidth(colorBoxSize);
        ImGui::ColorEdit3("##BoxColor", (float*)&Config.ESP.BoxColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
        ImGui::PopItemWidth();
    }
    ImGui::EndGroup();

    // RIGHT COLUMN - Use SameLine with proper spacing
    ImGui::SameLine(leftColumnWidth);
    ImGui::BeginGroup();
    {
        // DRAW NAME (aligns with ENABLE ESP)
        ImGui::Checkbox("DRAW NAME", &Config.ESP.IsName);
        ImGui::SameLine();
        ImGui::PushItemWidth(colorBoxSize);
        ImGui::ColorEdit3("##NameColor", (float*)&Config.ESP.NameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
        ImGui::PopItemWidth();
        
        // DRAW DISTANCE (aligns with DRAW LINE)
        ImGui::Checkbox("DRAW DIST", &Config.ESP.Distance);
        ImGui::SameLine();
        ImGui::PushItemWidth(colorBoxSize);
        ImGui::ColorEdit3("##DistanceColor", (float*)&Config.ESP.DistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
        ImGui::PopItemWidth();
        
        // DRAW HEALTH (aligns with DRAW BOX)
        ImGui::Checkbox("DRAW HEALTH", &Config.ESP.Health);
    }
    ImGui::EndGroup();

    break;
}
case 2: // MORE
{
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 0.0f, 0.0f, 1.0f));
    ImGui::Button(" MORE ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0));
    ImGui::PopStyleColor(1);
    ImGui::PopStyleVar();
    ImGui::Separator();
    ImGui::Spacing();
    ImGui::Checkbox("ENABLE  SPPED 50X", &SpeedHack);
    break;
}
case 3: // INFOS
{
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 0.0f, 0.0f, 1.0f));
    ImGui::Button(" INFO ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0));
    ImGui::PopStyleColor(1);
    ImGui::PopStyleVar();
    ImGui::Separator();
    ImGui::Spacing();
    
    ImGui::PushFont(ImGui::GetFont());
    
    ImGui::Text(ICON_FA_PALETTE " MENU COLOR");
    ImGui::SameLine();
    float colorBoxSize = 60.0f;
    ImGui::PushItemWidth(colorBoxSize);
    ImGui::ColorEdit3("##MenuAccentColor", (float*)&g_MenuAccentColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
    ImGui::PopItemWidth();
    
    float fps = ImGui::GetIO().Framerate;
    ImGui::Text(ICON_FA_TACHOMETER " FPS Render Game: %.1f", fps);
    
    ImGui::PopFont();
    
    break;
}
}
}
ImGui::EndChild();
ImGui::PopStyleVar(); // Pop WindowPadding
        

}
}
}
//
        
    

 
    /*
        
        ImDrawList*draw = ImGui::GetBackgroundDrawList();

        ImGui::SetNextWindowSize(ImVec2(720, 660), ImGuiCond_Once);
if (ImGui::Begin(OBFUSCATE("POWER CHEAT APKMOD MOD MENU VERSON 1.21 "), 0, ImGuiWindowFlags_NoBringToFrontOnFocus)) {
                    
// --- Auto-login from clipboard, show background error text if no key or login fails ---




ImVec2 windowSize = ImGui::GetWindowSize();
static int tab = 1;
if (ImGui::Button( ICON_FA_EYE " ESP ", ImVec2(ImVec2(windowSize.x * 0.318f, 0))))
tab = 1;
ImGui::SameLine();
if (ImGui::Button( ICON_FA_CROSSHAIRS " AIMBOT ", ImVec2(ImVec2(windowSize.x * 0.318f, 0))))
tab = 2;
ImGui::SameLine();
if (ImGui::Button( ICON_FA_INFO " INFO", ImVec2(ImVec2(windowSize.x * 0.318f, 0))))
tab = 3;

ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
ImGui::PushStyleColor(ImGuiCol_Border, ImColor(70, 70, 70, 200).Value);
ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 3.0f);
ImGui::PushStyleVar(ImGuiStyleVar_ScrollbarSize, 20.0f);
ImGui::BeginChild("HEX BLADE", ImVec2(0, 0), true);
ImGui::PopStyleVar(3);
if (tab == 1) {
ImGui::TextColored(ImColor(240, 162, 17, 255),"ESP TOTAL SETTINGS");
ImGui::Checkbox("ENABLE ESP", &Enable);

ImGui::Checkbox("DRAW LINE", &Config.ESP.Line);
ImGui::SameLine();
ImGui::ColorEdit3("##LineColor", (float*)&Config.ESP.LineColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

ImGui::Checkbox("DRAW BOX", &Config.ESP.Box);
ImGui::SameLine();
ImGui::ColorEdit3("##BoxColor", (float*)&Config.ESP.BoxColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

ImGui::Checkbox("DRAW NAME", &Config.ESP.IsName);
ImGui::SameLine();
ImGui::ColorEdit3("##NameColor", (float*)&Config.ESP.NameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

ImGui::Checkbox("DRAW HEALTH", &Config.ESP.Health);

ImGui::Checkbox("DRAW DSITANCE", &Config.ESP.Distance);
ImGui::SameLine();
ImGui::ColorEdit3("##DistanceColor", (float*)&Config.ESP.DistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

}
if (tab == 2) {
ImGui::TextColored(ImColor(10, 177, 255, 255),"AIMBOT SAFE SETTINGS");
////ImGui::Checkbox("ENABLE AIMBOT ESP", &AimbotEsp);
//ImGui::Checkbox("ENABLE AIMBOT AIM", &aimbotAim);
//ImGui::Checkbox("ENABLE AIMBOT TRIGGERS", &aimbotTrigger);
ImGui::Checkbox("ENABLE AIMKILL UINT32_T", &Config.Aimbot.aimkill);
ImGui::Checkbox("ENABLE SPPED UINTPTR_T", &Config.Aimbot.speedon);
ImGui::Checkbox("ENABLE  MASSKILL", &Mass.Sucks);
//ImGui::SliderFloat(OBFUSCATE("SMOOTH AIMFOV"), &Fov_Aim, 0.0f, 300.0f, "%.0f°", ImGuiSliderFlags_AlwaysClamp | ImGuiSliderFlags_NoInput);
//ImGui::SliderFloat(OBFUSCATE("ULTRA SMOOTH AIMFOV"), &Aimdis, 0.0f, 300.0f, "%.1f m", ImGuiSliderFlags_AlwaysClamp | ImGuiSliderFlags_NoInput);
        


}
if (tab == 3) {
ImGui::TextColored(ImColor(240, 162, 25, 177),"INFO MODS SETTINGS");
ImGui::BulletText("WELCOME TO POWER CHEATS MODS V1.22");
                                ImGui::Separator();               
                                ImGui::TextColored(ImVec4(224, 189, 255, 0.35f), "SYTEL BY POWER CHEAT TEAM");
                                float fps = ImGui::GetIO().Framerate;
ImGui::Separator();
ImGui::BulletText(" FPS Render Game : %.1f", fps);
                                ImGui::BulletText(" BRUTAL AIMKILL HIGH ");
                ImGui::BulletText(" BRUTAL SPPEED  HIGH");
                                ImGui::Separator();
                                ImGui::Text("To request a key contact your seller");
                                
                                ImGui::Separator();
                                ImGui::Text("Key Features :");
                ImGui::BulletText(" Enhanced Gameplay Tweaks");
                ImGui::BulletText(" Advance Anti-Cheat System");
                ImGui::BulletText(" Regular Update And Support");
                                ImGui::Separator();
                                ImGui::Text("Thank You For Choosing Us !!!");
                                ImGui::Separator();
                                ImGui::TextColored(ImVec4(133, 137, 143, 0.35f), "POWER CHEATS - Version 1.0 | © 2025 All Right Reserved");
                                ImGui::TextColored(ImVec4(133, 137, 143, 0.35f), "For Support, Contact your seller");
                                
}
}
}
*/
    ImGui::End();
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        return old_eglSwapBuffers(dpy, surface);
}
//}
typedef unsigned long DWORD;
static uintptr_t libBase;

uintptr_t string2Offset(const char *c) {
    int base = 16;
    // See if this function catches all possibilities.
    // If it doesn't, the function would have to be amended
    // whenever you add a combination of architecture and
    // compiler that is not yet addressed.
    static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
                  || sizeof(uintptr_t) == sizeof(unsigned long long),
                  "Please add string to handle conversion for this architecture.");

    // Now choose the correct function ...
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }

    // All other options exhausted, sizeof(uintptr_t) == sizeof(unsigned long long))
    return strtoull(c, nullptr, base);
}


inline void hack_injec();
inline void StartGUI() {
    void *ptr_eglSwapBuffer = DobbySymbolResolver("/system/lib/libEGL.so", "eglSwapBuffers");
    if (NULL != ptr_eglSwapBuffer) {
        DobbyHook((void *)ptr_eglSwapBuffer, (void*)hook_eglSwapBuffers, (void**)&old_eglSwapBuffers);
            LOGD("Gui Started");
                        hack_injec();
        }
    }

bool libLoaded = false;

DWORD findLibrary(const char *library) {
    char filename[0xFF] = {0},
            buffer[1024] = {0};
    FILE *fp = NULL;
    DWORD address = 0;

    sprintf(filename, OBFUSCATE("/proc/self/maps"));

    fp = fopen(filename, OBFUSCATE("rt"));
    if (fp == NULL) {
        perror(OBFUSCATE("fopen"));
        goto done;
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strstr(buffer, library)) {
            address = (DWORD) strtoul(buffer, NULL, 16);
            goto done;
        }
    }

    done:

    if (fp) {
        fclose(fp);
    }

    return address;
}

DWORD getAbsoluteAddress(const char *libraryName, DWORD relativeAddr) {
    libBase = findLibrary(libraryName);
    if (libBase == 0)
        return 0;
    return (reinterpret_cast<DWORD>(libBase + relativeAddr));
}
ProcMap unityMap, anogsMap, il2cppMap;
using KittyScanner::RegisterNativeFn;



    
    
void hack() {
     LOGD("Inject Ok");
    //std::thread thread_hack(hack_thread, getpid());
    //thread_hack.detach();
    
}
uintptr_t get_symbol_addr_in_pid(pid_t pid, const char* libname, uintptr_t offset_in_lib) {
    char maps_path[64];
    snprintf(maps_path, sizeof(maps_path), "/proc/%d/maps", pid);

    FILE* fp = fopen(maps_path, "r");
    if (!fp) return 0;

    char line[512];
    uintptr_t base = 0;

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, libname)) {
            sscanf(line, "%lx-%*lx", &base);
            break;
        }
    }
    fclose(fp);

    if (base == 0) return 0;
    return base + offset_in_lib;
}

pid_t get_pid_by_name(const char* process_name) {
    DIR* proc_dir = opendir("/proc");
    if (!proc_dir) return -1;

    struct dirent* entry;
    while ((entry = readdir(proc_dir)) != NULL) {
        if (entry->d_type != DT_DIR) continue;

        pid_t pid = atoi(entry->d_name);
        if (pid <= 0) continue;

        char cmdline_path[256];
        snprintf(cmdline_path, sizeof(cmdline_path), "/proc/%d/cmdline", pid);

        FILE* fp = fopen(cmdline_path, "r");
        if (!fp) continue;

        char cmdline[256];
        fgets(cmdline, sizeof(cmdline), fp);
        fclose(fp);

        if (strstr(cmdline, process_name)) {
            closedir(proc_dir);
            return pid;
        }
    }

    closedir(proc_dir);
    return -1;
}


void writeLog(const std::string& logMessage, const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Mở file ở chế độ append (thêm)
    if (outFile.is_open()) {
        outFile << logMessage << std::endl;
        outFile.close();
    } else {
        std::cerr << "Không thể mở file log: " << filename << std::endl;
    }
}

bool is_current_process(const char* target_name) {
    char cmdline_path[64];
    snprintf(cmdline_path, sizeof(cmdline_path), "/proc/%d/cmdline", getpid());

    FILE* fp = fopen(cmdline_path, "r");
    if (!fp) return false;

    char cmdline[256] = {0};
    fgets(cmdline, sizeof(cmdline), fp);
    fclose(fp);

    return strcmp(cmdline, target_name) == 0;
}

#include "aimkillhook.h"
// IL2CPP ATACH KE UPAR



void hack_injec() {
        while (!unityMap.isValid()) {
        unityMap = KittyMemory::getLibraryBaseMap("libunity.so");
                anogsMap = KittyMemory::getLibraryBaseMap("libanogs.so");
                il2cppMap = KittyMemory::getLibraryBaseMap("libil2cpp.so");
                
        sleep(6);
        }
    
 sleep(5);
    Il2CppAttach();
    
    if (mlovinit()) {
        setShader("_AlphaMask"); //Varies according to game
        LogShaders();
        Wallhack();
    }





        void *addr_get_fog = (void *) getAbsoluteAddress("libil2cpp.so",0xB6961A0);
    if (addr_get_fog)
       {
         *(void **)addr_get_fog = (void *)&get_fog;
       }
       
       

    ImGuiOK = true;
    
}


void hack_thread(pid_t pid) {
        
        StartGUI();
        while(pid == -1){pid = get_pid_by_name("com.dts.freefireth");} 
        remote_inject(pid);
        writeLog(to_string(pid));
    
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void * reserved) {
Tools::jvm = vm;
JNIEnv *env;
vm->GetEnv((void **) &env, JNI_VERSION_1_6); 
return JNI_VERSION_1_6;
}

__attribute__((constructor))
void lib_main()
{
    std::thread thread_hack(hack_thread, get_pid_by_name("com.dts.freefireth"));
    thread_hack.detach();
}


