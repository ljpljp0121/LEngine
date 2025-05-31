set WORKSPACE=..
set CONF_ROOT=.
set LUBAN_DLL=%CONF_ROOT%\Luban\Luban.dll
set DATA_OUTPATH=%WORKSPACE%\UnityProjects\Assets\Bundle\Config\TableData\json
set CODE_OUTPATH=%WORKSPACE%\Client\Client_Logic\Client_Logic\TableSystem\Tables

xcopy /s /e /i /y "%CONF_ROOT%\Luban\Templates\TableSystem.cs" "%CODE_OUTPATH%\..\TableSystem.cs"

dotnet %LUBAN_DLL% ^
    -t all ^
    -c cs-simple-json ^
    -d json ^
    --conf %CONF_ROOT%\luban.conf ^
    -x outputCodeDir=%CODE_OUTPATH% ^
    -x outputDataDir=%DATA_OUTPATH%

pause