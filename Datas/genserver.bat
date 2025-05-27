set WORKSPACE=..
set CONF_ROOT=.
set LUBAN_DLL=%CONF_ROOT%\Luban\Luban.dll


dotnet %LUBAN_DLL% ^
    -t server ^
    -c cs-simple-json ^
    -d json ^
    --conf %CONF_ROOT%\luban.conf ^
   -x outputCodeDir=%WORKSPACE%\Assets\Client\CoreEngine\TableSystem\Tables ^
   -x outputDataDir=%WORKSPACE%\Assets\Bundle\TableData

pause