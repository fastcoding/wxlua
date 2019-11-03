// ---------------------------------------------------------------------------
// ../modules/wxlua/debugger/wxluadebugger.cpp was generated by genwxbind.lua 
//
// Any changes made to this file will be lost when the file is regenerated.
// ---------------------------------------------------------------------------


#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
     #include "wx/wx.h"
#endif

#include "wxlua/wxlstate.h"
#include "wxlua/debugger/wxluadebugger_bind.h"

#ifdef __GNUC__
    #pragma GCC diagnostic ignored "-Wunused-variable"
#endif // __GNUC__

// ---------------------------------------------------------------------------
// Bind class wxLuaDebuggerServer
// ---------------------------------------------------------------------------

// Lua MetaTable Tag for Class 'wxLuaDebuggerServer'
int wxluatype_wxLuaDebuggerServer = WXLUA_TUNKNOWN;

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_AddBreakPoint[] = { &wxluatype_wxLuaDebuggerServer, &wxluatype_TSTRING, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_AddBreakPoint(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_AddBreakPoint[1] = {{ wxLua_wxLuaDebuggerServer_AddBreakPoint, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_AddBreakPoint }};
//     bool AddBreakPoint(const wxString &fileName, int lineNumber );
static int LUACALL wxLua_wxLuaDebuggerServer_AddBreakPoint(lua_State *L)
{
    // int lineNumber
    int lineNumber = (int)wxlua_getnumbertype(L, 3);
    // const wxString fileName
    const wxString fileName = wxlua_getwxStringtype(L, 2);
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call AddBreakPoint
    bool returns = (self->AddBreakPoint(fileName, lineNumber));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Break[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_Break(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_Break[1] = {{ wxLua_wxLuaDebuggerServer_Break, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Break }};
//     bool Break( );
static int LUACALL wxLua_wxLuaDebuggerServer_Break(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call Break
    bool returns = (self->Break());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_ClearAllBreakPoints[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_ClearAllBreakPoints(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_ClearAllBreakPoints[1] = {{ wxLua_wxLuaDebuggerServer_ClearAllBreakPoints, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_ClearAllBreakPoints }};
//     bool ClearAllBreakPoints( );
static int LUACALL wxLua_wxLuaDebuggerServer_ClearAllBreakPoints(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call ClearAllBreakPoints
    bool returns = (self->ClearAllBreakPoints());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Continue[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_Continue(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_Continue[1] = {{ wxLua_wxLuaDebuggerServer_Continue, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Continue }};
//     bool Continue( );
static int LUACALL wxLua_wxLuaDebuggerServer_Continue(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call Continue
    bool returns = (self->Continue());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_DisplayStackDialog[] = { &wxluatype_wxLuaDebuggerServer, &wxluatype_wxWindow, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_DisplayStackDialog(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_DisplayStackDialog[1] = {{ wxLua_wxLuaDebuggerServer_DisplayStackDialog, WXLUAMETHOD_METHOD, 2, 3, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_DisplayStackDialog }};
//     void DisplayStackDialog(wxWindow *pParent, wxWindowID id = wxID_ANY );
static int LUACALL wxLua_wxLuaDebuggerServer_DisplayStackDialog(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // wxWindowID id = wxID_ANY
    wxWindowID id = (argCount >= 3 ? (wxWindowID)wxlua_getnumbertype(L, 3) : wxID_ANY);
    // wxWindow pParent
    wxWindow * pParent = (wxWindow *)wxluaT_getuserdatatype(L, 2, wxluatype_wxWindow);
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call DisplayStackDialog
    self->DisplayStackDialog(pParent, id);

    return 0;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_EvaluateExpr[] = { &wxluatype_wxLuaDebuggerServer, &wxluatype_TNUMBER, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_EvaluateExpr(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_EvaluateExpr[1] = {{ wxLua_wxLuaDebuggerServer_EvaluateExpr, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_EvaluateExpr }};
//     bool EvaluateExpr(int exprRef, const wxString &expr );
static int LUACALL wxLua_wxLuaDebuggerServer_EvaluateExpr(lua_State *L)
{
    // const wxString expr
    const wxString expr = wxlua_getwxStringtype(L, 3);
    // int exprRef
    int exprRef = (int)wxlua_getnumbertype(L, 2);
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call EvaluateExpr
    bool returns = (self->EvaluateExpr(exprRef, expr));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_GetDebuggeeProcessId[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_GetDebuggeeProcessId(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_GetDebuggeeProcessId[1] = {{ wxLua_wxLuaDebuggerServer_GetDebuggeeProcessId, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_GetDebuggeeProcessId }};
//     long GetDebuggeeProcessId() const;
static int LUACALL wxLua_wxLuaDebuggerServer_GetDebuggeeProcessId(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call GetDebuggeeProcessId
    long returns = (self->GetDebuggeeProcessId());
    // push the result number
#if LUA_VERSION_NUM >= 503
if ((double)(lua_Integer)returns == (double)returns) {
    // Exactly representable as lua_Integer
    lua_pushinteger(L, returns);
} else
#endif
    lua_pushnumber(L, returns);

    return 1;
}

static int LUACALL wxLua_wxLuaDebuggerServer_GetNetworkName(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_GetNetworkName[1] = {{ wxLua_wxLuaDebuggerServer_GetNetworkName, WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, 0, 0, g_wxluaargtypeArray_None }};
//     static wxString GetNetworkName( );
static int LUACALL wxLua_wxLuaDebuggerServer_GetNetworkName(lua_State *L)
{
    // call GetNetworkName
    wxString returns = (wxLuaDebuggerServer::GetNetworkName());
    // push the result string
    wxlua_pushwxString(L, returns);

    return 1;
}

static int LUACALL wxLua_wxLuaDebuggerServer_GetProgramName(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_GetProgramName[1] = {{ wxLua_wxLuaDebuggerServer_GetProgramName, WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, 0, 0, g_wxluaargtypeArray_None }};
//     static wxString GetProgramName( );
static int LUACALL wxLua_wxLuaDebuggerServer_GetProgramName(lua_State *L)
{
    // call GetProgramName
    wxString returns = (wxLuaDebuggerServer::GetProgramName());
    // push the result string
    wxlua_pushwxString(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_KillDebuggee[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_KillDebuggee(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_KillDebuggee[1] = {{ wxLua_wxLuaDebuggerServer_KillDebuggee, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_KillDebuggee }};
//     bool KillDebuggee( );
static int LUACALL wxLua_wxLuaDebuggerServer_KillDebuggee(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call KillDebuggee
    bool returns = (self->KillDebuggee());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_RemoveBreakPoint[] = { &wxluatype_wxLuaDebuggerServer, &wxluatype_TSTRING, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_RemoveBreakPoint(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_RemoveBreakPoint[1] = {{ wxLua_wxLuaDebuggerServer_RemoveBreakPoint, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_RemoveBreakPoint }};
//     bool RemoveBreakPoint(const wxString &fileName, int lineNumber );
static int LUACALL wxLua_wxLuaDebuggerServer_RemoveBreakPoint(lua_State *L)
{
    // int lineNumber
    int lineNumber = (int)wxlua_getnumbertype(L, 3);
    // const wxString fileName
    const wxString fileName = wxlua_getwxStringtype(L, 2);
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call RemoveBreakPoint
    bool returns = (self->RemoveBreakPoint(fileName, lineNumber));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Reset[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_Reset(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_Reset[1] = {{ wxLua_wxLuaDebuggerServer_Reset, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Reset }};
//     bool Reset( );
static int LUACALL wxLua_wxLuaDebuggerServer_Reset(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call Reset
    bool returns = (self->Reset());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Run[] = { &wxluatype_wxLuaDebuggerServer, &wxluatype_TSTRING, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_Run(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_Run[1] = {{ wxLua_wxLuaDebuggerServer_Run, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Run }};
//     bool Run(const wxString &fileName, const wxString &buffer );
static int LUACALL wxLua_wxLuaDebuggerServer_Run(lua_State *L)
{
    // const wxString buffer
    const wxString buffer = wxlua_getwxStringtype(L, 3);
    // const wxString fileName
    const wxString fileName = wxlua_getwxStringtype(L, 2);
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call Run
    bool returns = (self->Run(fileName, buffer));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StartClient[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_StartClient(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_StartClient[1] = {{ wxLua_wxLuaDebuggerServer_StartClient, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StartClient }};
//     long StartClient( );
static int LUACALL wxLua_wxLuaDebuggerServer_StartClient(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call StartClient
    long returns = (self->StartClient());
    // push the result number
#if LUA_VERSION_NUM >= 503
if ((double)(lua_Integer)returns == (double)returns) {
    // Exactly representable as lua_Integer
    lua_pushinteger(L, returns);
} else
#endif
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StartServer[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_StartServer(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_StartServer[1] = {{ wxLua_wxLuaDebuggerServer_StartServer, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StartServer }};
//     bool StartServer( );
static int LUACALL wxLua_wxLuaDebuggerServer_StartServer(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call StartServer
    bool returns = (self->StartServer());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Step[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_Step(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_Step[1] = {{ wxLua_wxLuaDebuggerServer_Step, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_Step }};
//     bool Step( );
static int LUACALL wxLua_wxLuaDebuggerServer_Step(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call Step
    bool returns = (self->Step());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StepOut[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_StepOut(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_StepOut[1] = {{ wxLua_wxLuaDebuggerServer_StepOut, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StepOut }};
//     bool StepOut( );
static int LUACALL wxLua_wxLuaDebuggerServer_StepOut(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call StepOut
    bool returns = (self->StepOut());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StepOver[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_StepOver(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_StepOver[1] = {{ wxLua_wxLuaDebuggerServer_StepOver, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StepOver }};
//     bool StepOver( );
static int LUACALL wxLua_wxLuaDebuggerServer_StepOver(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call StepOver
    bool returns = (self->StepOver());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StopServer[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_StopServer(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_StopServer[1] = {{ wxLua_wxLuaDebuggerServer_StopServer, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_StopServer }};
//     bool StopServer( );
static int LUACALL wxLua_wxLuaDebuggerServer_StopServer(lua_State *L)
{
    // get this
    wxLuaDebuggerServer * self = (wxLuaDebuggerServer *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerServer);
    // call StopServer
    bool returns = (self->StopServer());
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_delete[] = { &wxluatype_wxLuaDebuggerServer, NULL };
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_delete[1] = {{ wxlua_userdata_delete, WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_delete }};

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerServer_constructor[] = { &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxLuaDebuggerServer_constructor(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerServer_constructor[1] = {{ wxLua_wxLuaDebuggerServer_constructor, WXLUAMETHOD_CONSTRUCTOR, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerServer_constructor }};
//     wxLuaDebuggerServer(int portNumber );
static int LUACALL wxLua_wxLuaDebuggerServer_constructor(lua_State *L)
{
    // int portNumber
    int portNumber = (int)wxlua_getnumbertype(L, 1);
    // call constructor
    wxLuaDebuggerServer* returns = new wxLuaDebuggerServer(portNumber);
    // add to tracked memory list
    wxluaO_addgcobject(L, returns, wxluatype_wxLuaDebuggerServer);
    // push the constructed class pointer
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxLuaDebuggerServer);

    return 1;
}



void wxLua_wxLuaDebuggerServer_delete_function(void** p)
{
    wxLuaDebuggerServer* o = (wxLuaDebuggerServer*)(*p);
    delete o;
}

// Map Lua Class Methods to C Binding Functions
wxLuaBindMethod wxLuaDebuggerServer_methods[] = {
    { "AddBreakPoint", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_AddBreakPoint, 1, NULL },
    { "Break", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_Break, 1, NULL },
    { "ClearAllBreakPoints", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_ClearAllBreakPoints, 1, NULL },
    { "Continue", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_Continue, 1, NULL },
    { "DisplayStackDialog", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_DisplayStackDialog, 1, NULL },
    { "EvaluateExpr", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_EvaluateExpr, 1, NULL },
    { "GetDebuggeeProcessId", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_GetDebuggeeProcessId, 1, NULL },
    { "GetNetworkName", WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, s_wxluafunc_wxLua_wxLuaDebuggerServer_GetNetworkName, 1, NULL },
    { "GetProgramName", WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, s_wxluafunc_wxLua_wxLuaDebuggerServer_GetProgramName, 1, NULL },
    { "KillDebuggee", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_KillDebuggee, 1, NULL },
    { "RemoveBreakPoint", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_RemoveBreakPoint, 1, NULL },
    { "Reset", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_Reset, 1, NULL },
    { "Run", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_Run, 1, NULL },
    { "StartClient", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_StartClient, 1, NULL },
    { "StartServer", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_StartServer, 1, NULL },
    { "Step", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_Step, 1, NULL },
    { "StepOut", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_StepOut, 1, NULL },
    { "StepOver", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_StepOver, 1, NULL },
    { "StopServer", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerServer_StopServer, 1, NULL },
    { "delete", WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, s_wxluafunc_wxLua_wxLuaDebuggerServer_delete, 1, NULL },
    { "wxLuaDebuggerServer", WXLUAMETHOD_CONSTRUCTOR, s_wxluafunc_wxLua_wxLuaDebuggerServer_constructor, 1, NULL },
    { 0, 0, 0, 0 },
};

int wxLuaDebuggerServer_methodCount = sizeof(wxLuaDebuggerServer_methods)/sizeof(wxLuaBindMethod) - 1;


// ---------------------------------------------------------------------------
// Bind class wxLuaDebuggerEvent
// ---------------------------------------------------------------------------

// Lua MetaTable Tag for Class 'wxLuaDebuggerEvent'
int wxluatype_wxLuaDebuggerEvent = WXLUA_TUNKNOWN;

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetFileName[] = { &wxluatype_wxLuaDebuggerEvent, NULL };
static int LUACALL wxLua_wxLuaDebuggerEvent_GetFileName(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetFileName[1] = {{ wxLua_wxLuaDebuggerEvent_GetFileName, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetFileName }};
//     wxString GetFileName() const;
static int LUACALL wxLua_wxLuaDebuggerEvent_GetFileName(lua_State *L)
{
    // get this
    wxLuaDebuggerEvent * self = (wxLuaDebuggerEvent *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerEvent);
    // call GetFileName
    wxString returns = (self->GetFileName());
    // push the result string
    wxlua_pushwxString(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetLineNumber[] = { &wxluatype_wxLuaDebuggerEvent, NULL };
static int LUACALL wxLua_wxLuaDebuggerEvent_GetLineNumber(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetLineNumber[1] = {{ wxLua_wxLuaDebuggerEvent_GetLineNumber, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetLineNumber }};
//     int GetLineNumber() const;
static int LUACALL wxLua_wxLuaDebuggerEvent_GetLineNumber(lua_State *L)
{
    // get this
    wxLuaDebuggerEvent * self = (wxLuaDebuggerEvent *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerEvent);
    // call GetLineNumber
    int returns = (self->GetLineNumber());
    // push the result number
#if LUA_VERSION_NUM >= 503
if ((double)(lua_Integer)returns == (double)returns) {
    // Exactly representable as lua_Integer
    lua_pushinteger(L, returns);
} else
#endif
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetMessage[] = { &wxluatype_wxLuaDebuggerEvent, NULL };
static int LUACALL wxLua_wxLuaDebuggerEvent_GetMessage(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetMessage[1] = {{ wxLua_wxLuaDebuggerEvent_GetMessage, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetMessage }};
//     wxString GetMessage() const;
static int LUACALL wxLua_wxLuaDebuggerEvent_GetMessage(lua_State *L)
{
    // get this
    wxLuaDebuggerEvent * self = (wxLuaDebuggerEvent *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerEvent);
    // call GetMessage
    wxString returns = (self->GetMessage());
    // push the result string
    wxlua_pushwxString(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetReference[] = { &wxluatype_wxLuaDebuggerEvent, NULL };
static int LUACALL wxLua_wxLuaDebuggerEvent_GetReference(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetReference[1] = {{ wxLua_wxLuaDebuggerEvent_GetReference, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_GetReference }};
//     int GetReference() const;
static int LUACALL wxLua_wxLuaDebuggerEvent_GetReference(lua_State *L)
{
    // get this
    wxLuaDebuggerEvent * self = (wxLuaDebuggerEvent *)wxluaT_getuserdatatype(L, 1, wxluatype_wxLuaDebuggerEvent);
    // call GetReference
    int returns = (self->GetReference());
    // push the result number
#if LUA_VERSION_NUM >= 503
if ((double)(lua_Integer)returns == (double)returns) {
    // Exactly representable as lua_Integer
    lua_pushinteger(L, returns);
} else
#endif
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_delete[] = { &wxluatype_wxLuaDebuggerEvent, NULL };
static wxLuaBindCFunc s_wxluafunc_wxLua_wxLuaDebuggerEvent_delete[1] = {{ wxlua_userdata_delete, WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, 1, 1, s_wxluatypeArray_wxLua_wxLuaDebuggerEvent_delete }};



void wxLua_wxLuaDebuggerEvent_delete_function(void** p)
{
    wxLuaDebuggerEvent* o = (wxLuaDebuggerEvent*)(*p);
    delete o;
}

// Map Lua Class Methods to C Binding Functions
wxLuaBindMethod wxLuaDebuggerEvent_methods[] = {
    { "GetFileName", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetFileName, 1, NULL },
    { "GetLineNumber", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetLineNumber, 1, NULL },
    { "GetMessage", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetMessage, 1, NULL },
    { "GetReference", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxLuaDebuggerEvent_GetReference, 1, NULL },
    { "delete", WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, s_wxluafunc_wxLua_wxLuaDebuggerEvent_delete, 1, NULL },
    { 0, 0, 0, 0 },
};

int wxLuaDebuggerEvent_methodCount = sizeof(wxLuaDebuggerEvent_methods)/sizeof(wxLuaBindMethod) - 1;




// ---------------------------------------------------------------------------
// ../modules/wxlua/debugger/wxluadebugger_bind.cpp was generated by genwxbind.lua 
//
// Any changes made to this file will be lost when the file is regenerated.
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
// wxLuaGetEventList_wxluadebugger() is called to register events
// ---------------------------------------------------------------------------

wxLuaBindEvent* wxLuaGetEventList_wxluadebugger(size_t &count)
{
    static wxLuaBindEvent eventList[] =
    {
        { "wxEVT_WXLUA_DEBUGGER_BREAK", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_BREAK), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_DEBUGGEE_CONNECTED", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_DEBUGGEE_CONNECTED), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_DEBUGGEE_DISCONNECTED", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_DEBUGGEE_DISCONNECTED), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_ERROR", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_ERROR), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_EVALUATE_EXPR", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_EVALUATE_EXPR), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_EXIT", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_EXIT), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_PRINT", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_PRINT), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_STACK_ENTRY_ENUM", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_STACK_ENTRY_ENUM), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_STACK_ENUM", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_STACK_ENUM), &wxluatype_wxLuaDebuggerEvent },
        { "wxEVT_WXLUA_DEBUGGER_TABLE_ENUM", WXLUA_GET_wxEventType_ptr(wxEVT_WXLUA_DEBUGGER_TABLE_ENUM), &wxluatype_wxLuaDebuggerEvent },

        { 0, 0, 0 },
    };
    count = sizeof(eventList)/sizeof(wxLuaBindEvent) - 1;
    return eventList;
}

// ---------------------------------------------------------------------------
// wxLuaGetDefineList_wxluadebugger() is called to register #define and enum
// ---------------------------------------------------------------------------

wxLuaBindNumber* wxLuaGetDefineList_wxluadebugger(size_t &count)
{
    static wxLuaBindNumber numberList[] =
    {

        { 0, 0 },
    };
    count = sizeof(numberList)/sizeof(wxLuaBindNumber) - 1;
    return numberList;
}

// ---------------------------------------------------------------------------

// wxLuaGetStringList_wxluadebugger() is called to register #define_string
// ---------------------------------------------------------------------------

wxLuaBindString* wxLuaGetStringList_wxluadebugger(size_t &count)
{
    static wxLuaBindString stringList[] =
    {

        { 0, 0 },
    };
    count = sizeof(stringList)/sizeof(wxLuaBindString) - 1;
    return stringList;
}

// ---------------------------------------------------------------------------
// wxLuaGetObjectList_wxluadebugger() is called to register object and pointer bindings
// ---------------------------------------------------------------------------

wxLuaBindObject* wxLuaGetObjectList_wxluadebugger(size_t &count)
{
    static wxLuaBindObject objectList[] =
    {

        { 0, 0, 0, 0 },
    };
    count = sizeof(objectList)/sizeof(wxLuaBindObject) - 1;
    return objectList;
}

// ---------------------------------------------------------------------------
// wxLuaGetFunctionList_wxluadebugger() is called to register global functions
// ---------------------------------------------------------------------------

// %override wxLua_function_LuaStackDialog
// %function void LuaStackDialog()
static int LUACALL wxLua_function_LuaStackDialog(lua_State *L)
{
    // call StackDialog

    wxLuaStackDialog stackDialog(wxLuaState(L), NULL);
    stackDialog.ShowModal();

    return 0;
}

static wxLuaBindCFunc s_wxluafunc_wxLua_function_LuaStackDialog[1] = {{ wxLua_function_LuaStackDialog, WXLUAMETHOD_CFUNCTION, 0, 0, g_wxluaargtypeArray_None }};

// ---------------------------------------------------------------------------
// wxLuaGetFunctionList_wxluadebugger() is called to register global functions
// ---------------------------------------------------------------------------

wxLuaBindMethod* wxLuaGetFunctionList_wxluadebugger(size_t &count)
{
    static wxLuaBindMethod functionList[] =
    {
        { "LuaStackDialog", WXLUAMETHOD_CFUNCTION, s_wxluafunc_wxLua_function_LuaStackDialog, 1, NULL },

        { 0, 0, 0, 0 }, 
    };
    count = sizeof(functionList)/sizeof(wxLuaBindMethod) - 1;
    return functionList;
}



// ---------------------------------------------------------------------------
// wxLuaGetClassList_wxluadebugger() is called to register classes
// ---------------------------------------------------------------------------

static const char* wxluaclassname_wxEvent = "wxEvent";
static const char* wxluaclassname_wxEvtHandler = "wxEvtHandler";
static const char* wxluaclassname_wxLuaDebuggerEvent = "wxLuaDebuggerEvent";
static const char* wxluaclassname_wxLuaDebuggerServer = "wxLuaDebuggerServer";

static const char* wxluabaseclassnames_wxLuaDebuggerEvent[] = { wxluaclassname_wxEvent, NULL };
static wxLuaBindClass* wxluabaseclassbinds_wxLuaDebuggerEvent[] = { NULL };
static const char* wxluabaseclassnames_wxLuaDebuggerServer[] = { wxluaclassname_wxEvtHandler, NULL };
static wxLuaBindClass* wxluabaseclassbinds_wxLuaDebuggerServer[] = { NULL };
// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

extern wxLuaBindMethod wxLuaDebuggerEvent_methods[];
extern int wxLuaDebuggerEvent_methodCount;
extern void wxLua_wxLuaDebuggerEvent_delete_function(void** p);
extern wxLuaBindMethod wxLuaDebuggerServer_methods[];
extern int wxLuaDebuggerServer_methodCount;
extern void wxLua_wxLuaDebuggerServer_delete_function(void** p);




wxLuaBindClass* wxLuaGetClassList_wxluadebugger(size_t &count)
{
    static wxLuaBindClass classList[] =
    {
        { wxluaclassname_wxLuaDebuggerEvent, wxLuaDebuggerEvent_methods, wxLuaDebuggerEvent_methodCount, CLASSINFO(wxLuaDebuggerEvent), &wxluatype_wxLuaDebuggerEvent, wxluabaseclassnames_wxLuaDebuggerEvent, wxluabaseclassbinds_wxLuaDebuggerEvent, NULL, NULL, NULL, 0, &wxLua_wxLuaDebuggerEvent_delete_function, }, 
        { wxluaclassname_wxLuaDebuggerServer, wxLuaDebuggerServer_methods, wxLuaDebuggerServer_methodCount, CLASSINFO(wxLuaDebuggerServer), &wxluatype_wxLuaDebuggerServer, wxluabaseclassnames_wxLuaDebuggerServer, wxluabaseclassbinds_wxLuaDebuggerServer, NULL, NULL, NULL, 0, &wxLua_wxLuaDebuggerServer_delete_function, }, 

        { 0, 0, 0, 0, 0, 0, 0 }, 
    };
    count = sizeof(classList)/sizeof(wxLuaBindClass) - 1;

    return classList;
}

// ---------------------------------------------------------------------------
// wxLuaBinding_wxluadebugger() - the binding class
// ---------------------------------------------------------------------------

IMPLEMENT_DYNAMIC_CLASS(wxLuaBinding_wxluadebugger, wxLuaBinding)

wxLuaBinding_wxluadebugger::wxLuaBinding_wxluadebugger() : wxLuaBinding()
{
    m_bindingName   = wxT("wxluadebugger");
    m_nameSpace     = wxT("wxlua");
    m_classArray    = wxLuaGetClassList_wxluadebugger(m_classCount);
    m_numberArray   = wxLuaGetDefineList_wxluadebugger(m_numberCount);
    m_stringArray   = wxLuaGetStringList_wxluadebugger(m_stringCount);
    m_eventArray    = wxLuaGetEventList_wxluadebugger(m_eventCount);
    m_objectArray   = wxLuaGetObjectList_wxluadebugger(m_objectCount);
    m_functionArray = wxLuaGetFunctionList_wxluadebugger(m_functionCount);
    InitBinding();
}



// ---------------------------------------------------------------------------

wxLuaBinding* wxLuaBinding_wxluadebugger_init()
{
    static wxLuaBinding_wxluadebugger m_binding;

    if (wxLuaBinding::GetBindingArray().Index(&m_binding) == wxNOT_FOUND)
        wxLuaBinding::GetBindingArray().Add(&m_binding);

    return &m_binding;
}


